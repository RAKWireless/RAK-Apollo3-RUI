/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    utilities_def.h
  * @author  MCD Application Team
  * @brief   Definitions for modules requiring utilities
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UTILITIES_DEF_H__
#define __UTILITIES_DEF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/******************************************************************************
  * LOW POWER MANAGER
  ******************************************************************************/
/**
  * Supported requester to the MCU Low Power Manager - can be increased up  to 32
  * It lists a bit mapping of all user of the Low Power Manager
  */
typedef enum
{
  /* USER CODE BEGIN CFG_LPM_Id_t_0 */

  /* USER CODE END CFG_LPM_Id_t_0 */
  CFG_LPM_APPLI_Id,
  CFG_LPM_UART_TX_Id,
  CFG_LPM_SGFX_MN_Id,
  /* USER CODE BEGIN CFG_LPM_Id_t */

  /* USER CODE END CFG_LPM_Id_t */
} CFG_LPM_Id_t;

/*---------------------------------------------------------------------------*/
/*                             sequencer definitions                         */
/*---------------------------------------------------------------------------*/

/**
  * This is the list of priority required by the application
  * Each Id shall be in the range 0..31
  */
typedef enum
{
  CFG_SEQ_Prio_0,
  /* USER CODE BEGIN CFG_SEQ_Prio_Id_t */

  /* USER CODE END CFG_SEQ_Prio_Id_t */
  CFG_SEQ_Prio_NBR,
} CFG_SEQ_Prio_Id_t;

/**
  * This is the list of task id required by the application
  * Each Id shall be in the range 0..31
  */
typedef enum
{
  /* CM4 */
  /* USER CODE BEGIN CFG_SEQ_Task_Id_t_0 */

  /* USER CODE END CFG_SEQ_Task_Id_t_0 */
  CFG_SEQ_Task_MbSystemNotifRcv,
  CFG_SEQ_Task_MbSigfoxNotifRcv,
  CFG_SEQ_Task_MbRadioNotifRcv,
  CFG_SEQ_Task_Pb,
  CFG_SEQ_Evt_Monarch,
  /* USER CODE BEGIN CFG_SEQ_Task_Id_t */

  /* USER CODE END CFG_SEQ_Task_Id_t */
  CFG_SEQ_Task_NBR
} CFG_SEQ_Task_Id_t;

/**
  * This is a bit mapping over 32bits listing all events id supported in the application
  */
typedef enum
{
  /* CM4 */
  CFG_SEQ_Evt_MbSystemRespRcv,
  CFG_SEQ_Evt_MbKmsRespRcv,
  CFG_SEQ_Evt_MbSigfoxRespRcv,
  CFG_SEQ_Evt_MbRadioRespRcv,
  /* USER CODE BEGIN CFG_SEQ_IdleEvt_Id_t */

  /* USER CODE END CFG_SEQ_IdleEvt_Id_t */
  CFG_SEQ_Evt_NBR
} CFG_SEQ_IdleEvt_Id_t;

/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* External variables --------------------------------------------------------*/
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __UTILITIES_DEF_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
