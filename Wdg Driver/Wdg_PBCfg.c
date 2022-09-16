/******************************************************************************
 *
 * Module: Wdg
 *
 * File Name: Wdg_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Wdg Driver
 *
 * Author: Amr Hassan
 ******************************************************************************/

#include "Wdg.h"

/*
 * Module Version 1.0.0
 */
#define WDG_PBCFG_SW_MAJOR_VERSION              (1U)
#define WDG_PBCFG_SW_MINOR_VERSION              (0U)
#define WDG_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define WDG_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define WDG_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define WDG_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Wdg_PBcfg.c and Wdg.h files */
#if ((WDG_PBCFG_AR_RELEASE_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION)\
 ||  (WDG_PBCFG_AR_RELEASE_MINOR_VERSION != WDG_AR_RELEASE_MINOR_VERSION)\
 ||  (WDG_PBCFG_AR_RELEASE_PATCH_VERSION != WDG_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Wdg_PBcfg.c and Wdg.h files */
#if ((WDG_PBCFG_SW_MAJOR_VERSION != WDG_SW_MAJOR_VERSION)\
 ||  (WDG_PBCFG_SW_MINOR_VERSION != WDG_SW_MINOR_VERSION)\
 ||  (WDG_PBCFG_SW_PATCH_VERSION != WDG_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

extern void WATCHDOG0_ISR(void);

/* PB structure used with Wdg_Init API */
const Wdg_ConfigType Wdg_ConfigPtr = {
                 WATCHDOG0 , WDGIF_OFF_MODE , WDG_BOTH , InitialTimeout , MaxTimeout , WDT_NMI , WATCHDOG0_ISR,
                 WATCHDOG1 , WDGIF_OFF_MODE , WDG_BOTH , InitialTimeout , MaxTimeout , WDT_NMI , NULL_PTR
};