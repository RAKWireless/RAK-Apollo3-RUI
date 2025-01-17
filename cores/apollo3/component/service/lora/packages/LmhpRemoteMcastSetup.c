/*!
 * \file      LmhpRemoteMcastSetup.c
 *
 * \brief     Implements the LoRa-Alliance remote multicast setup package
 *            Specification: https://lora-alliance.org/sites/default/files/2018-09/remote_multicast_setup_v1.0.0.pdf
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2018 Semtech
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 */
#ifdef SUPPORT_FUOTA
#include "LmHandler.h"
#include "LmhpRemoteMcastSetup.h"
#include "udrv_serial.h"
#include "service_lora.h"
#include "udrv_errno.h"

//#define DEBUG_ENABLE

#ifdef  DEBUG_ENABLE
#define DBG(fmt, args...)      udrv_serial_log_printf("(Line:%d)"fmt"\r\n",__LINE__,##args)
#else
#define DBG(fmt, args...)
#endif



/*!
 * LoRaWAN Application Layer Remote multicast setup Specification
 */
#define REMOTE_MCAST_SETUP_PORT                     200

#define REMOTE_MCAST_SETUP_ID                       2
#define REMOTE_MCAST_SETUP_VERSION                  1

typedef enum LmhpRemoteMcastSetupSessionStates_e
{
    REMOTE_MCAST_SETUP_SESSION_STATE_IDLE,
    REMOTE_MCAST_SETUP_SESSION_STATE_START,
    REMOTE_MCAST_SETUP_SESSION_STATE_STOP,
}LmhpRemoteMcastSetupSessionStates_t;

/*!
 * Package current context
 */
typedef struct LmhpRemoteMcastSetupState_s
{
    bool Initialized;
    bool IsTxPending;
    LmhpRemoteMcastSetupSessionStates_t SessionState;
    uint8_t DataBufferMaxSize;
    uint8_t *DataBuffer;
}LmhpRemoteMcastSetupState_t;

typedef enum LmhpRemoteMcastSetupMoteCmd_e
{
    REMOTE_MCAST_SETUP_PKG_VERSION_ANS              = 0x00,
    REMOTE_MCAST_SETUP_MC_GROUP_STATUS_ANS          = 0x01,
    REMOTE_MCAST_SETUP_MC_GROUP_SETUP_ANS           = 0x02,
    REMOTE_MCAST_SETUP_MC_GROUP_DELETE_ANS          = 0x03,
    REMOTE_MCAST_SETUP_MC_GROUP_CLASS_C_SESSION_ANS = 0x04,
    REMOTE_MCAST_SETUP_MC_GROUP_CLASS_B_SESSION_ANS = 0x05,
}LmhpRemoteMcastSetupMoteCmd_t;

typedef enum LmhpRemoteMcastSetupSrvCmd_e
{
    REMOTE_MCAST_SETUP_PKG_VERSION_REQ              = 0x00,
    REMOTE_MCAST_SETUP_MC_GROUP_STATUS_REQ          = 0x01,
    REMOTE_MCAST_SETUP_MC_GROUP_SETUP_REQ           = 0x02,
    REMOTE_MCAST_SETUP_MC_GROUP_DELETE_REQ          = 0x03,
    REMOTE_MCAST_SETUP_MC_GROUP_CLASS_C_SESSION_REQ = 0x04,
    REMOTE_MCAST_SETUP_MC_GROUP_CLASS_B_SESSION_REQ = 0x05,
}LmhpRemoteMcastSetupSrvCmd_t;

/*!
 * Initializes the package with provided parameters
 *
 * \param [IN] params            Pointer to the package parameters
 * \param [IN] dataBuffer        Pointer to main application buffer
 * \param [IN] dataBufferMaxSize Main application buffer maximum size
 */
static void LmhpRemoteMcastSetupInit( void *params, uint8_t *dataBuffer, uint8_t dataBufferMaxSize );

/*!
 * Returns the current package initialization status.
 *
 * \retval status Package initialization status
 *                [true: Initialized, false: Not initialized]
 */
static bool LmhpRemoteMcastSetupIsInitialized( void );

/*!
 * Returns the package operation status.
 *
 * \retval status Package operation status
 *                [true: Running, false: Not running]
 */
static bool LmhpRemoteMcastSetupIsTxPending( void );

/*!
 * Processes the internal package events.
 */
static void LmhpRemoteMcastSetupProcess( void );

/*!
 * Processes the MCPS Indication
 *
 * \param [IN] mcpsIndication     MCPS indication primitive data
 */
static void LmhpRemoteMcastSetupOnMcpsIndication( McpsIndication_t *mcpsIndication );

static void OnSessionStartTimer( void *context );

static void OnSessionStopTimer( void *context );

static service_lora_mcastsetup_cb service_lora_mcastsetup_callback;

static LmhpRemoteMcastSetupState_t LmhpRemoteMcastSetupState =
{
    .Initialized = false,
    .IsTxPending = false,
    .SessionState = REMOTE_MCAST_SETUP_SESSION_STATE_IDLE,
};

typedef struct McGroupData_s
{
    union
    {
        uint8_t Value;
        struct
        {
            uint8_t McGroupId:   2;
            uint8_t RFU:         6;
        }Fields;
    }IdHeader;
    uint32_t McAddr;
    uint8_t McKeyEncrypted[16];
    uint32_t McFCountMin;
    uint32_t McFCountMax;
}McGroupData_t;

typedef enum eSessionState
{
    SESSION_STOPED,
    SESSION_STARTED
}SessionState_t;

typedef struct McSessionData_s
{
    McGroupData_t McGroupData;
    SessionState_t SessionState;
    uint32_t SessionTime;
    uint8_t SessionTimeout;
    McRxParams_t RxParams;
}McSessionData_t;

McSessionData_t McSessionData[LORAMAC_MAX_MC_CTX];

/*!
 * Session start timer
 */
static TimerEvent_t SessionStartTimer;

/*!
 * Session start timer
 */
TimerEvent_t SessionStopTimer;

static LmhPackage_t LmhpRemoteMcastSetupPackage =
{
    .Port = REMOTE_MCAST_SETUP_PORT,
    .Init = LmhpRemoteMcastSetupInit,
    .IsInitialized = LmhpRemoteMcastSetupIsInitialized,
    .IsTxPending = LmhpRemoteMcastSetupIsTxPending,
    .Process = LmhpRemoteMcastSetupProcess,
    .OnMcpsConfirmProcess = NULL,                              // Not used in this package
    .OnMcpsIndicationProcess = LmhpRemoteMcastSetupOnMcpsIndication,
    .OnMlmeConfirmProcess = NULL,                              // Not used in this package
    .OnMlmeIndicationProcess = NULL,                           // Not used in this package
    .OnMacMcpsRequest = NULL,                                  // To be initialized by LmHandler
    .OnMacMlmeRequest = NULL,                                  // To be initialized by LmHandler
    .OnJoinRequest = NULL,                                     // To be initialized by LmHandler
    .OnDeviceTimeRequest = NULL,                               // To be initialized by LmHandler
    .OnSysTimeUpdate = NULL,                                   // To be initialized by LmHandler
};

LmhPackage_t *LmhpRemoteMcastSetupPackageFactory( void )
{
    return &LmhpRemoteMcastSetupPackage;
}

static void LmhpRemoteMcastSetupInit( void * params, uint8_t *dataBuffer, uint8_t dataBufferMaxSize )
{
    if( dataBuffer != NULL )
    {
        LmhpRemoteMcastSetupState.DataBuffer = dataBuffer;
        LmhpRemoteMcastSetupState.DataBufferMaxSize = dataBufferMaxSize;
        if(LmhpRemoteMcastSetupState.Initialized == false)
        {
            LmhpRemoteMcastSetupState.Initialized = true;
            TimerInit( &SessionStartTimer, OnSessionStartTimer );
            TimerInit( &SessionStopTimer, OnSessionStopTimer );
        }
    }
    else
    {
        LmhpRemoteMcastSetupState.Initialized = false;
    }
    LmhpRemoteMcastSetupState.IsTxPending = false;
    service_lora_mcastsetup_callback = NULL;
}

static bool LmhpRemoteMcastSetupIsInitialized( void )
{
    return LmhpRemoteMcastSetupState.Initialized;
}

static bool LmhpRemoteMcastSetupIsTxPending( void )
{
    return LmhpRemoteMcastSetupState.IsTxPending;
}

static void LmhpRemoteMcastSetupProcess( void )
{
    LmhpRemoteMcastSetupSessionStates_t state;

    CRITICAL_SECTION_BEGIN( );
    state = LmhpRemoteMcastSetupState.SessionState;
    LmhpRemoteMcastSetupState.SessionState = REMOTE_MCAST_SETUP_SESSION_STATE_IDLE;
    CRITICAL_SECTION_END( );

    switch( state )
    {
        case REMOTE_MCAST_SETUP_SESSION_STATE_START:
            // Switch to Class C

            TimerSetValue( &SessionStopTimer, ( 1 << McSessionData[0].SessionTimeout ) * 1000 );
            TimerStart( &SessionStopTimer );
            LmHandlerRequestClass( CLASS_C );
            break;
        case REMOTE_MCAST_SETUP_SESSION_STATE_STOP:
            // Switch back to Class A
            LmHandlerRequestClass( CLASS_A );
            break;
        case REMOTE_MCAST_SETUP_SESSION_STATE_IDLE:
        // Intentional fall through
        default:
            // Nothing to do.
            break;
    }

}
static void LmhpRemoteMcastSetupOnMcpsIndication( McpsIndication_t *mcpsIndication )
{
    uint8_t cmdIndex = 0;
    uint8_t dataBufferIndex = 0;

    if( mcpsIndication->Port != REMOTE_MCAST_SETUP_PORT )
    {
        return;
    }

    while( cmdIndex < mcpsIndication->BufferSize )
    {
        switch( mcpsIndication->Buffer[cmdIndex++] )
        {
            case REMOTE_MCAST_SETUP_PKG_VERSION_REQ:
            {
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_PKG_VERSION_ANS;
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_ID;
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_VERSION;
                break;
            }
            case REMOTE_MCAST_SETUP_MC_GROUP_STATUS_REQ:
            {
                // TODO implement command prosessing and handling
                break;
            }
            case REMOTE_MCAST_SETUP_MC_GROUP_SETUP_REQ:
            {
                uint8_t idError = 0x01; // One bit value
                uint8_t id = mcpsIndication->Buffer[cmdIndex++];
                McSessionData[id].McGroupData.IdHeader.Value = id;

                McSessionData[id].McGroupData.McAddr =  ( mcpsIndication->Buffer[cmdIndex++] << 0  ) & 0x000000FF;
                McSessionData[id].McGroupData.McAddr += ( mcpsIndication->Buffer[cmdIndex++] << 8  ) & 0x0000FF00;
                McSessionData[id].McGroupData.McAddr += ( mcpsIndication->Buffer[cmdIndex++] << 16 ) & 0x00FF0000;
                McSessionData[id].McGroupData.McAddr += ( mcpsIndication->Buffer[cmdIndex++] << 24 ) & 0xFF000000;

                for( int8_t i = 0; i < 16; i++ )
                {
                    McSessionData[id].McGroupData.McKeyEncrypted[i] = mcpsIndication->Buffer[cmdIndex++];
                }

                McSessionData[id].McGroupData.McFCountMin =  ( mcpsIndication->Buffer[cmdIndex++] << 0  ) & 0x000000FF;
                McSessionData[id].McGroupData.McFCountMin += ( mcpsIndication->Buffer[cmdIndex++] << 8  ) & 0x0000FF00;
                McSessionData[id].McGroupData.McFCountMin += ( mcpsIndication->Buffer[cmdIndex++] << 16 ) & 0x00FF0000;
                McSessionData[id].McGroupData.McFCountMin += ( mcpsIndication->Buffer[cmdIndex++] << 24 ) & 0xFF000000;

                McSessionData[id].McGroupData.McFCountMax =  ( mcpsIndication->Buffer[cmdIndex++] << 0  ) & 0x000000FF;
                McSessionData[id].McGroupData.McFCountMax += ( mcpsIndication->Buffer[cmdIndex++] << 8  ) & 0x0000FF00;
                McSessionData[id].McGroupData.McFCountMax += ( mcpsIndication->Buffer[cmdIndex++] << 16 ) & 0x00FF0000;
                McSessionData[id].McGroupData.McFCountMax += ( mcpsIndication->Buffer[cmdIndex++] << 24 ) & 0xFF000000;

                McChannelParams_t channel = 
                {
                    .IsRemotelySetup = true,
                    .IsEnabled = true,
                    .GroupID = ( AddressIdentifier_t )McSessionData[id].McGroupData.IdHeader.Fields.McGroupId,
                    .Address = McSessionData[id].McGroupData.McAddr,
                    .McKeys.McKeyE = McSessionData[id].McGroupData.McKeyEncrypted,
                    .FCountMin = McSessionData[id].McGroupData.McFCountMin,
                    .FCountMax = McSessionData[id].McGroupData.McFCountMax,
                    .RxParams.Params.ClassC = // Field not used for multicast channel setup. Must be initialized to something
                    {
                        .Frequency = 0,
                        .Datarate = 0
                    }
                };
                LoRaMacMcChannelDelete(channel.GroupID);
                if( LoRaMacMcChannelSetup( &channel ) == LORAMAC_STATUS_OK )
                {
                    idError = 0x00;
                }
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_MC_GROUP_SETUP_ANS;
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = ( idError << 2 ) | McSessionData[id].McGroupData.IdHeader.Fields.McGroupId;
                MlmeReq_t mlmeReq;
                mlmeReq.Type = MLME_DEVICE_TIME;
                LoRaMacStatus_t status = LoRaMacMlmeRequest(&mlmeReq);
                break;
            }
            case REMOTE_MCAST_SETUP_MC_GROUP_DELETE_REQ:
            {
                DBG ("MC_GROUP_DELETE_REQ\r\n");
                uint8_t status = 0x00;
                uint8_t id = mcpsIndication->Buffer[cmdIndex++] & 0x03;

                status = id;

                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_MC_GROUP_DELETE_ANS;

                if( LoRaMacMcChannelDelete( ( AddressIdentifier_t )id ) != LORAMAC_STATUS_OK )
                {
                    status |= 0x04; // McGroupUndefined bit set
                }
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = status;
                break;
            }
            case REMOTE_MCAST_SETUP_MC_GROUP_CLASS_C_SESSION_REQ:
            {
                DBG ("MC_GROUP_CLASS_C_SESSION_REQ\r\n");
                int32_t timeToSessionStart = 0;
                bool isTimerSet = false;
                uint8_t status = 0x00;
                uint8_t id = mcpsIndication->Buffer[cmdIndex++] & 0x03;

                McSessionData[id].RxParams.Class = CLASS_C;

                McSessionData[id].SessionTime =  ( mcpsIndication->Buffer[cmdIndex++] << 0  ) & 0x000000FF;
                McSessionData[id].SessionTime += ( mcpsIndication->Buffer[cmdIndex++] << 8  ) & 0x0000FF00;
                McSessionData[id].SessionTime += ( mcpsIndication->Buffer[cmdIndex++] << 16 ) & 0x00FF0000;
                McSessionData[id].SessionTime += ( mcpsIndication->Buffer[cmdIndex++] << 24 ) & 0xFF000000;

                // Add Unix to Gps epcoh offset. The system time is based on Unix time.
                McSessionData[id].SessionTime += UNIX_GPS_EPOCH_OFFSET;

                McSessionData[id].SessionTimeout =  mcpsIndication->Buffer[cmdIndex++] & 0x0F;

                McSessionData[id].RxParams.Params.ClassC.Frequency =  ( mcpsIndication->Buffer[cmdIndex++] << 0  ) & 0x000000FF;
                McSessionData[id].RxParams.Params.ClassC.Frequency |= ( mcpsIndication->Buffer[cmdIndex++] << 8  ) & 0x0000FF00;
                McSessionData[id].RxParams.Params.ClassC.Frequency |= ( mcpsIndication->Buffer[cmdIndex++] << 16 ) & 0x00FF0000;
                McSessionData[id].RxParams.Params.ClassC.Frequency *= 100;

                McSessionData[id].RxParams.Params.ClassC.Datarate = mcpsIndication->Buffer[cmdIndex++];

                if( LoRaMacMcChannelSetupRxParams( ( AddressIdentifier_t )id, &McSessionData[id].RxParams, &status ) == LORAMAC_STATUS_OK )
                {
                    SysTime_t curTime = { .Seconds = 0, .SubSeconds = 0 };
                    curTime = SysTimeGet( );
                    timeToSessionStart = McSessionData[id].SessionTime - curTime.Seconds;
                    if( timeToSessionStart > 0 )
                    {
                        // Start session start timer
                        TimerSetValue( &SessionStartTimer, (timeToSessionStart-1) * 1000 );

                        TimerStart( &SessionStartTimer );

                        isTimerSet = true;

                    }
                    else
                    {
                        // Session start time before current device time
                        status |= 0x10;
                    }
                }
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = REMOTE_MCAST_SETUP_MC_GROUP_CLASS_C_SESSION_ANS;
               
                LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = status;
                if( isTimerSet == true )
                {
                    LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = ( timeToSessionStart >> 0  ) & 0xFF;
                    LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = ( timeToSessionStart >> 8  ) & 0xFF;
                    LmhpRemoteMcastSetupState.DataBuffer[dataBufferIndex++] = ( timeToSessionStart >> 16 ) & 0xFF;
                }
                break;
            }
            case REMOTE_MCAST_SETUP_MC_GROUP_CLASS_B_SESSION_REQ:
            {
                DBG ("MC_GROUP_CLASS_B_SESSION_REQ\r\n");
                // TODO implement command prosessing and handling
                break;
            }
            default:
            {
                break;
            }
        }
    }

    if( dataBufferIndex != 0 )
    {
        // Answer commands
        LmHandlerAppData_t appData =
        {
            .Buffer = LmhpRemoteMcastSetupState.DataBuffer,
            .BufferSize = dataBufferIndex,
            .Port = REMOTE_MCAST_SETUP_PORT
        };
        LmHandlerSend( &appData, LORAMAC_HANDLER_UNCONFIRMED_MSG );
    }       
}

static void OnSessionStartTimer( void *context )
{
    TimerStop( &SessionStartTimer );

    LmhpRemoteMcastSetupState.SessionState = REMOTE_MCAST_SETUP_SESSION_STATE_START;
    if(service_lora_mcastsetup_callback != NULL)
        service_lora_mcastsetup_callback();
    service_lora_mcastsetup_callback = NULL;
}

static void OnSessionStopTimer( void *context )
{
    TimerStop( &SessionStopTimer );

    LmhpRemoteMcastSetupState.SessionState = REMOTE_MCAST_SETUP_SESSION_STATE_STOP;
}
bool FUOTA_StartTime_IsRunning( void )
{
#ifdef stm32wle5xx
    uint32_t time = 0xFFFFFFFFU;
    UTIL_TIMER_GetRemainingTime( &SessionStartTimer, &time );
    if( UTIL_TimerDriver.Tick2ms(time) < 10000)
        return true;
    else
        return false;
#else
    return TimerIsStarted( &SessionStartTimer );
#endif
}

void LmhpRemoteMcastSetupRegisterPowersaveHandler(service_lora_mcastsetup_cb callback)
{
    service_lora_mcastsetup_callback = callback;
}

#endif // FUOTA








