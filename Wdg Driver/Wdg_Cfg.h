 /******************************************************************************
 *
 * Module: Wdg
 *
 * File Name: Wdg_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Wdg Driver
 *
 * Author: Amr Hassan
 ******************************************************************************/

#ifndef WDG_CFG_H
#define WDG_CFG_H


/*
 * Module Version 1.0.0
 */
#define WDG_CFG_SW_MAJOR_VERSION              (1U)
#define WDG_CFG_SW_MINOR_VERSION              (0U)
#define WDG_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define WDG_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define WDG_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define WDG_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define WDG_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define WDG_VERSION_INFO_API                (STD_OFF)

/* Pre-compile option to allow / forbid disabling the watchdog driver */
#define WDG_DISABLE_ALLOWED                 (STD_ON)

/* Pre-compile option for Location (memory address) of the watchdog trigger routine*/
#define WDG_TRIGGER_LOCATION  
   
/* Number of the configured Dio Channels */
#define WDG_CONFIGURED_CHANNLES              (2U)
   
#define InitialTimeout                       (32500ul)
#define MaxTimeout                           (65535ul)

#define WDG_LOCK_VALUE                        0x1ACCE551 

#define WDG0_CLOCK                            0x01
#define WDG1_CLOCK                            0x02

#define WDG_INTEN_ENABLE                      0x01
#define WDG_INTEN_DISABLE                     0x00

#define WDG_INTTYPE_NMI                       0x04
#define WDG_INTTYPE_STD                       0x00

#endif /* WDG_CFG_H */