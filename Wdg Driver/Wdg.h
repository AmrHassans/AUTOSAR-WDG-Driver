 /******************************************************************************
 *
 * Module: Wdg
 *
 * File Name: Wdg.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Wdg Driver
 *
 * Author: Amr Hassan
 ******************************************************************************/

#ifndef WDG_H
#define WDG_H


/* Id for the company in the AUTOSAR */
#define WDG_VENDOR_ID    (1000U)

/* Wdg Module Id */
#define WDG_MODULE_ID    (120U)

/* Wdg Instance Id */
#define WDG_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define WDG_SW_MAJOR_VERSION           (1U)
#define WDG_SW_MINOR_VERSION           (0U)
#define WDG_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define WDG_AR_RELEASE_MAJOR_VERSION   (4U)
#define WDG_AR_RELEASE_MINOR_VERSION   (0U)
#define WDG_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for Wdg Status
 */
#define WDG_INITIALIZED                (1U)
#define WDG_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Wdg Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != WDG_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != WDG_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* Wdg Pre-Compile Configuration Header file */
#include "Wdg_Cfg.h"

/* AUTOSAR Version checking between Wdg_Cfg.h and Wdg.h files */
#if ((WDG_CFG_AR_RELEASE_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION)\
 ||  (WDG_CFG_AR_RELEASE_MINOR_VERSION != WDG_AR_RELEASE_MINOR_VERSION)\
 ||  (WDG_CFG_AR_RELEASE_PATCH_VERSION != WDG_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Wdg_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Wdg_Cfg.h and Wdg.h files */
#if ((WDG_CFG_SW_MAJOR_VERSION != WDG_SW_MAJOR_VERSION)\
 ||  (WDG_CFG_SW_MINOR_VERSION != WDG_SW_MINOR_VERSION)\
 ||  (WDG_CFG_SW_PATCH_VERSION != WDG_SW_PATCH_VERSION))
  #error "The SW version of Wdg_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
#define WDG_INIT_SID                              (uint8)0x00
#define WDG_SET_MODE_SID                          (uint8)0x01
#define WDG_SET_TRIGGER_CONDITION_SID             (uint8)0x02
#define PORT_SET_PIN_MODE_SID	                  (uint8)0x03

/*******************************************************************************
 *                         DET Error Codes                                     *
 *******************************************************************************/
/* API service used in wrong context*/
#define WDG_E_DRIVER_STATE           (uint8)0x10

/* API service called with wrong / inconsistent parameter(s)*/
#define WDG_E_PARAM_MODE             (uint8)0x11
#define WDG_E_PARAM_CONFIG           (uint8)0x12
   
/* The passed timeout value is higher than the maximum timeout value */
#define WDG_E_PARAM_TIMEOUT          (uint8)0x13
   
/* API is called with wrong pointer value (e.g. NULL pointer) */
#define WDG_E_PARAM_POINTER          (uint8)0x14
   
   
   
   
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

   /* the range 0 .. 65535*/
typedef uint16 WdgInitialTimeout;

 /* the range 0 .. 65535*/
typedef uint16 WdgMaxTimeout;

typedef enum{
  WATCHDOG0,WATCHDOG1
}WdgIndex;

typedef enum{
  WDGIF_OFF_MODE,WDGIF_SLOW_MODE,WDGIF_FAST_MODE
}WdgDefaultMode;


typedef enum{
  WDG_BOTH,WDG_TOGGLE,WDG_WINDOW
}WdgTriggerMode;

typedef enum{
  WDT_STD,WDT_NMI
}Wdg_InterruptType;

typedef struct 
{
  WdgIndex              Wdg_Id;
  WdgDefaultMode        Wdg_Mode;
  WdgTriggerMode        Wdg_TriggerMode;
  WdgInitialTimeout     Wdg_InitialTimeout;
  WdgMaxTimeout         Wdg_MaxTimeout;
  Wdg_InterruptType     InterruptType;  
  void 		       (*WdgEnNotifcation)(void);
}Wdg_ConfigChannel;  

typedef struct
{
  Wdg_ConfigChannel Wdg_Channels[WDG_CONFIGURED_CHANNLES];
}Wdg_ConfigType;
/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
void Wdg_Init( const Wdg_ConfigType* ConfigPtr );
//Std_ReturnType Wdg_SetMode( WdgIf_ModeType Mode );
void Wdg_SetTriggerCondition( uint16 timeout );
void Wdg_GetVersionInfo( Std_VersionInfoType* versioninfo );

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Wdg and other modules */
extern const Wdg_ConfigType Wdg_Configuration;
#endif /* WDG_H */