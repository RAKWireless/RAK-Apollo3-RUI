#ifndef __MCU_BASIC_H__
#define __MCU_BASIC_H__

#define MCU_FLASH_OTA_ADDRESS           0x00084000
#define MCU_FLASH_OTA_ADDRESS_UART      0x00014000

#define MCU_OTA_POINTER_LOCATION        0x000F8000
#define MCU_BLE_NVM_LOCATION            0x000FA000
#define MCU_BOOT_VERSION_LOCATION       0x000FC000  // This is only for info!!!
#define MCU_BOOTLOADER_FLAG_LOCATION    0x000FE000

#define MCU_FACTORY_DEFAULT_NVM_ADDR      0x000F6000
#define MCU_SYS_CONFIG_NVM_ADDR           0x000F4000
#define MCU_USER_DATA_NVM_ADDR            0x000D4000

#endif
