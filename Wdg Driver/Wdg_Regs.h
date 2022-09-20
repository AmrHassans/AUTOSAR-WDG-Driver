 /******************************************************************************
 *
 * Module: Wdg
 *
 * File Name: Wdg_Regs.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Wdg Driver Registers
 *
 * Author: Amr Hassan
 ******************************************************************************/

#ifndef WDG_REGS_H
#define WDG_REGS_H

#include "Std_Types.h"


#define WATCHDOG0_BASE_ADDRESS 0x40000000
#define WATCHDOG1_BASE_ADDRESS 0x40001000


#define WDTLOAD_OFFSET_ADDRESS  0x000
#define WDTVALUE_OFFSET_ADDRESS 0x004
#define WDTCTL_OFFSET_ADDRESS   0x008
#define WDTICR_OFFSET_ADDRESS   0x00C
#define WDTRIS_OFFSET_ADDRESS   0x010
#define WDTMIS_OFFSET_ADDRESS   0x014
#define WDTTEST_OFFSET_ADDRESS  0x418
#define WDTLOCK_OFFSET_ADDRESS  0xC00
#define PPWD_OFFSET_ADDRESS     0x300
#define RCGCWD_OFFSET_ADDRESS   0x600


#endif /* WDG_H */