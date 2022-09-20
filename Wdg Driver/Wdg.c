/******************************************************************************
*
* Module: Wdg
*
* File Name: Wdg.c
*
* Description: Source file for TM4C123GH6PM Microcontroller - Wdg Driver
*
* Author: Amr Hassan
******************************************************************************/

#include "Wdg.h"
#include "Wdg_Regs.h"
#include "tm4c123gh6pm.h"

#if (WDG_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"

/* AUTOSAR Version checking between Det and Dio Modules */
#if ((DET_AR_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION)\
|| (DET_AR_MINOR_VERSION != WDG_AR_RELEASE_MINOR_VERSION)\
  || (DET_AR_PATCH_VERSION != WDG_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Det.h does not match the expected version"
#endif

#endif

STATIC const Wdg_ConfigChannel * Wdg_ConfigPtr = NULL_PTR;
STATIC uint8 Wdg_Status = WDG_NOT_INITIALIZED;

static void (*WdgEnNotifcation[WDG_CONFIGURED_CHANNLES]) (void);
/************************************************************************************
* Service Name: Wdg_Init
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Wdg module.
************************************************************************************/
void Wdg_Init(const Wdg_ConfigType * ConfigPtr)
{
#if (WDG_DEV_ERROR_DETECT == STD_ON)
  /* check if the input configuration pointer is not a NULL_PTR */
  if (NULL_PTR == ConfigPtr)
  {
    Det_ReportError(WDG_MODULE_ID, WDG_INSTANCE_ID, WDG_INIT_SID,
                    WDG_E_PARAM_CONFIG);
  }
  else
#endif
  {
    /*
    * Set the module state to initialized and point to the PB configuration structure using a global pointer.
    * This global pointer is global to be used by other functions to read the PB configuration structures
    */
    Wdg_Status       = WDG_INITIALIZED;
    Wdg_ConfigPtr = ConfigPtr->Wdg_Channels; /* address of the first Channels structure --> Channels[0] */
  }
  for (uint8 i = 0; i < WDG_CONFIGURED_CHANNLES; i++)
  {
    volatile uint32 * Wdg_Ptr = NULL_PTR;
    
    WdgEnNotifcation[i]=Wdg_ConfigPtr->WdgEnNotifcation;
    
    switch (Wdg_ConfigPtr[i].Wdg_Id)
    {
    case  0: Wdg_Ptr = (volatile uint32 *)WATCHDOG0_BASE_ADDRESS;
    break ;
    case  1: Wdg_Ptr = (volatile uint32 *)WATCHDOG1_BASE_ADDRESS;
    break ;
    }
    
    if (Wdg_ConfigPtr[i].Wdg_Id == WATCHDOG0)
    {
      *(volatile uint32 *)((volatile uint8 *)SYSCTL_RCGCWD_R) |= WDG0_CLOCK;
      *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTCTL_OFFSET_ADDRESS) |= WDG_INTEN_ENABLE;
    }
    else if (Wdg_ConfigPtr[i].Wdg_Id == WATCHDOG1)
    {
      *(volatile uint32 *)((volatile uint8 *)SYSCTL_RCGCWD_R) |= WDG1_CLOCK;
      *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTCTL_OFFSET_ADDRESS) |= WDG_INTEN_ENABLE;
    }
    else 
    {
      /*  Do Nothing */
    }
    
    if (Wdg_ConfigPtr[i].InterruptType == WDT_NMI)
    {
      *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTCTL_OFFSET_ADDRESS) |= WDG_INTTYPE_NMI;
    }
    else if (Wdg_ConfigPtr[i].InterruptType == WDT_STD)
    {
      *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTCTL_OFFSET_ADDRESS) |= WDG_INTTYPE_STD;
    }
    else 
    {
      /* Do Nothing */
    }
    
    *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTLOAD_OFFSET_ADDRESS) = Wdg_ConfigPtr[i].Wdg_InitialTimeout;
    *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTLOCK_OFFSET_ADDRESS) = WDG_LOCK_VALUE;
  }       
  
}

/************************************************************************************
* Service Name: Wdg_SetTriggerCondition
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): timeout - Timeout value (milliseconds) for setting the trigger counter.
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the timeout value for the trigger counter.
************************************************************************************/
void Wdg_SetTriggerCondition( uint16 timeout )
{
  volatile uint32 * Wdg_Ptr = NULL_PTR;
  
#if (WDG_DEV_ERROR_DETECT == STD_ON)
  /* Check if the Driver is initialized before using this function */
  if (WDG_NOT_INITIALIZED == Wdg_Status)
  {
    Det_ReportError(WDG_MODULE_ID, WDG_INSTANCE_ID,
                    WDG_SET_TRIGGER_CONDITION_SID, WDG_E_PARAM_TIMEOUT);
  }
  else
  {
    /* No Action Required */
  }
  /* Check if the used channel is within the valid range */
  for (uint8 j = 0; j < WDG_CONFIGURED_CHANNLES; j++)
  {
    if (WDG_CONFIGURED_CHANNLES < (Wdg_ConfigPtr[j].Wdg_Id))
    {
      
      Det_ReportError(WDG_MODULE_ID, WDG_INSTANCE_ID,
                      WDG_SET_TRIGGER_CONDITION_SID, WDG_E_PARAM_POINTER);
    }
    else
    {
      /* No Action Required */
    }
  }
#endif
  
  /* In-case there are no errors */
  
  for (uint8 i = 0; i < WDG_CONFIGURED_CHANNLES; i++)
  {
    switch(Wdg_ConfigPtr[i].Wdg_Id)
    {
    case 0:    Wdg_Ptr = (volatile uint32 *)WATCHDOG0_BASE_ADDRESS;
    break;
    case 1:    Wdg_Ptr = (volatile uint32 *)WATCHDOG1_BASE_ADDRESS;
    break;
    }
  }    
  *(volatile uint32 *)((volatile uint8 *)Wdg_Ptr + WDTLOAD_OFFSET_ADDRESS) = timeout;
  
}
/************************************************************************************
* Service Name: Wdg_GetVersionInfo
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to where to store the version information of this module.
* Return value: None
* Description: Function to get the version information of this module.
************************************************************************************/




/**************************************************
* Service Name: WATCHDOG0_Handler
***************************************************/
void WATCHDOG0_Handler(void)
{
  volatile uint32 * Wdg_Ptr = (volatile uint32 *)WATCHDOG0_BASE_ADDRESS;
  
  if(WdgEnNotifcation[0] != NULL_PTR)
  {
    /*Call the funciton*/
    WdgEnNotifcation[0]();
  }
  else 
  {
    /* Do Noting */
    
  }
  
}

/**************************************************
* Service Name: WATCHDOG1_Handler
***************************************************/
void WATCHDOG1_Handler(void)
{
  volatile uint32 * Wdg_Ptr = (volatile uint32 *)WATCHDOG1_BASE_ADDRESS;
  
  if(WdgEnNotifcation[1] != NULL_PTR)
  {
    /*Call the funciton*/
    WdgEnNotifcation[1]();
  }
  else 
  {
    /* Do Noting */
    
  }
  
}