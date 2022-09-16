#ifndef TM4C123GH6PM_REGISTERS
#define TM4C123GH6PM_REGISTERS

#include "Std_Types.h"

/*****************************************************************************
GPIO registers (PORTA)
*****************************************************************************/
#define GPIO_PORTA_DATA_REG       (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTA_DIR_REG        (*((volatile uint32 *)0x40004400))
#define GPIO_PORTA_AFSEL_REG      (*((volatile uint32 *)0x40004420))
#define GPIO_PORTA_PUR_REG        (*((volatile uint32 *)0x40004510))
#define GPIO_PORTA_PDR_REG        (*((volatile uint32 *)0x40004514))
#define GPIO_PORTA_DEN_REG        (*((volatile uint32 *)0x4000451C))
#define GPIO_PORTA_LOCK_REG       (*((volatile uint32 *)0x40004520))
#define GPIO_PORTA_CR_REG         (*((volatile uint32 *)0x40004524))
#define GPIO_PORTA_AMSEL_REG      (*((volatile uint32 *)0x40004528))
#define GPIO_PORTA_PCTL_REG       (*((volatile uint32 *)0x4000452C))

/* PORTA External Interrupts Registers */
#define GPIO_PORTA_IS_REG         (*((volatile uint32 *)0x40004404))
#define GPIO_PORTA_IBE_REG        (*((volatile uint32 *)0x40004408))
#define GPIO_PORTA_IEV_REG        (*((volatile uint32 *)0x4000440C))
#define GPIO_PORTA_IM_REG         (*((volatile uint32 *)0x40004410))
#define GPIO_PORTA_RIS_REG        (*((volatile uint32 *)0x40004414))
#define GPIO_PORTA_ICR_REG        (*((volatile uint32 *)0x4000441C))

/*****************************************************************************
GPIO registers (PORTB)
*****************************************************************************/
#define GPIO_PORTB_DATA_REG       (*((volatile uint32 *)0x400053FC))
#define GPIO_PORTB_DIR_REG        (*((volatile uint32 *)0x40005400))
#define GPIO_PORTB_AFSEL_REG      (*((volatile uint32 *)0x40005420))
#define GPIO_PORTB_PUR_REG        (*((volatile uint32 *)0x40005510))
#define GPIO_PORTB_PDR_REG        (*((volatile uint32 *)0x40005514))
#define GPIO_PORTB_DEN_REG        (*((volatile uint32 *)0x4000551C))
#define GPIO_PORTB_LOCK_REG       (*((volatile uint32 *)0x40005520))
#define GPIO_PORTB_CR_REG         (*((volatile uint32 *)0x40005524))
#define GPIO_PORTB_AMSEL_REG      (*((volatile uint32 *)0x40005528))
#define GPIO_PORTB_PCTL_REG       (*((volatile uint32 *)0x4000552C))

/* PORTB External Interrupts Registers */
#define GPIO_PORTB_IS_REG         (*((volatile uint32 *)0x40005404))
#define GPIO_PORTB_IBE_REG        (*((volatile uint32 *)0x40005408))
#define GPIO_PORTB_IEV_REG        (*((volatile uint32 *)0x4000540C))
#define GPIO_PORTB_IM_REG         (*((volatile uint32 *)0x40005410))
#define GPIO_PORTB_RIS_REG        (*((volatile uint32 *)0x40005414))
#define GPIO_PORTB_ICR_REG        (*((volatile uint32 *)0x4000541C))

/*****************************************************************************
GPIO registers (PORTC)
*****************************************************************************/
#define GPIO_PORTC_DATA_REG       (*((volatile uint32 *)0x400063FC))
#define GPIO_PORTC_DIR_REG        (*((volatile uint32 *)0x40006400))
#define GPIO_PORTC_AFSEL_REG      (*((volatile uint32 *)0x40006420))
#define GPIO_PORTC_PUR_REG        (*((volatile uint32 *)0x40006510))
#define GPIO_PORTC_PDR_REG        (*((volatile uint32 *)0x40006514))
#define GPIO_PORTC_DEN_REG        (*((volatile uint32 *)0x4000651C))
#define GPIO_PORTC_LOCK_REG       (*((volatile uint32 *)0x40006520))
#define GPIO_PORTC_CR_REG         (*((volatile uint32 *)0x40006524))
#define GPIO_PORTC_AMSEL_REG      (*((volatile uint32 *)0x40006528))
#define GPIO_PORTC_PCTL_REG       (*((volatile uint32 *)0x4000652C))

/* PORTC External Interrupts Registers */
#define GPIO_PORTC_IS_REG         (*((volatile uint32 *)0x40006404))
#define GPIO_PORTC_IBE_REG        (*((volatile uint32 *)0x40006408))
#define GPIO_PORTC_IEV_REG        (*((volatile uint32 *)0x4000640C))
#define GPIO_PORTC_IM_REG         (*((volatile uint32 *)0x40006410))
#define GPIO_PORTC_RIS_REG        (*((volatile uint32 *)0x40006414))
#define GPIO_PORTC_ICR_REG        (*((volatile uint32 *)0x4000641C))

/*****************************************************************************
GPIO registers (PORTD)
*****************************************************************************/
#define GPIO_PORTD_DATA_REG       (*((volatile uint32 *)0x400073FC))
#define GPIO_PORTD_DIR_REG        (*((volatile uint32 *)0x40007400))
#define GPIO_PORTD_AFSEL_REG      (*((volatile uint32 *)0x40007420))
#define GPIO_PORTD_PUR_REG        (*((volatile uint32 *)0x40007510))
#define GPIO_PORTD_PDR_REG        (*((volatile uint32 *)0x40007514))
#define GPIO_PORTD_DEN_REG        (*((volatile uint32 *)0x4000751C))
#define GPIO_PORTD_LOCK_REG       (*((volatile uint32 *)0x40007520))
#define GPIO_PORTD_CR_REG         (*((volatile uint32 *)0x40007524))
#define GPIO_PORTD_AMSEL_REG      (*((volatile uint32 *)0x40007528))
#define GPIO_PORTD_PCTL_REG       (*((volatile uint32 *)0x4000752C))

/* PORTD External Interrupts Registers */
#define GPIO_PORTD_IS_REG         (*((volatile uint32 *)0x40007404))
#define GPIO_PORTD_IBE_REG        (*((volatile uint32 *)0x40007408))
#define GPIO_PORTD_IEV_REG        (*((volatile uint32 *)0x4000740C))
#define GPIO_PORTD_IM_REG         (*((volatile uint32 *)0x40007410))
#define GPIO_PORTD_RIS_REG        (*((volatile uint32 *)0x40007414))
#define GPIO_PORTD_ICR_REG        (*((volatile uint32 *)0x4000741C))

/*****************************************************************************
GPIO registers (PORTE)
*****************************************************************************/
#define GPIO_PORTE_DATA_REG       (*((volatile uint32 *)0x400243FC))
#define GPIO_PORTE_DIR_REG        (*((volatile uint32 *)0x40024400))
#define GPIO_PORTE_AFSEL_REG      (*((volatile uint32 *)0x40024420))
#define GPIO_PORTE_PUR_REG        (*((volatile uint32 *)0x40024510))
#define GPIO_PORTE_PDR_REG        (*((volatile uint32 *)0x40024514))
#define GPIO_PORTE_DEN_REG        (*((volatile uint32 *)0x4002451C))
#define GPIO_PORTE_LOCK_REG       (*((volatile uint32 *)0x40024520))
#define GPIO_PORTE_CR_REG         (*((volatile uint32 *)0x40024524))
#define GPIO_PORTE_AMSEL_REG      (*((volatile uint32 *)0x40024528))
#define GPIO_PORTE_PCTL_REG       (*((volatile uint32 *)0x4002452C))

/* PORTE External Interrupts Registers */
#define GPIO_PORTE_IS_REG         (*((volatile uint32 *)0x40024404))
#define GPIO_PORTE_IBE_REG        (*((volatile uint32 *)0x40024408))
#define GPIO_PORTE_IEV_REG        (*((volatile uint32 *)0x4002440C))
#define GPIO_PORTE_IM_REG         (*((volatile uint32 *)0x40024410))
#define GPIO_PORTE_RIS_REG        (*((volatile uint32 *)0x40024414))
#define GPIO_PORTE_ICR_REG        (*((volatile uint32 *)0x4002441C))

/*****************************************************************************
GPIO registers (PORTF)
*****************************************************************************/
#define GPIO_PORTF_DATA_REG       (*((volatile uint32 *)0x400253FC))
#define GPIO_PORTF_DIR_REG        (*((volatile uint32 *)0x40025400))
#define GPIO_PORTF_AFSEL_REG      (*((volatile uint32 *)0x40025420))
#define GPIO_PORTF_PUR_REG        (*((volatile uint32 *)0x40025510))
#define GPIO_PORTF_PDR_REG        (*((volatile uint32 *)0x40025514))
#define GPIO_PORTF_DEN_REG        (*((volatile uint32 *)0x4002551C))
#define GPIO_PORTF_LOCK_REG       (*((volatile uint32 *)0x40025520))
#define GPIO_PORTF_CR_REG         (*((volatile uint32 *)0x40025524))
#define GPIO_PORTF_AMSEL_REG      (*((volatile uint32 *)0x40025528))
#define GPIO_PORTF_PCTL_REG       (*((volatile uint32 *)0x4002552C))

/* PORTF External Interrupts Registers */
#define GPIO_PORTF_IS_REG         (*((volatile uint32 *)0x40025404))
#define GPIO_PORTF_IBE_REG        (*((volatile uint32 *)0x40025408))
#define GPIO_PORTF_IEV_REG        (*((volatile uint32 *)0x4002540C))
#define GPIO_PORTF_IM_REG         (*((volatile uint32 *)0x40025410))
#define GPIO_PORTF_RIS_REG        (*((volatile uint32 *)0x40025414))
#define GPIO_PORTF_ICR_REG        (*((volatile uint32 *)0x4002541C))

#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))


/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((volatile uint32 *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((volatile uint32 *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((volatile uint32 *)0xE000E018))

/*****************************************************************************
PLL Registers
*****************************************************************************/
#define SYSCTL_RIS_REG            (*((volatile uint32 *)0x400FE050))
#define SYSCTL_RCC_REG            (*((volatile uint32 *)0x400FE060))
#define SYSCTL_RCC2_REG           (*((volatile uint32 *)0x400FE070))

/*****************************************************************************
NVIC Registers
*****************************************************************************/
#define NVIC_PRI0_REG             (*((volatile uint32 *)0xE000E400))
#define NVIC_PRI1_REG             (*((volatile uint32 *)0xE000E404))
#define NVIC_PRI2_REG             (*((volatile uint32 *)0xE000E408))
#define NVIC_PRI3_REG             (*((volatile uint32 *)0xE000E40C))
#define NVIC_PRI4_REG             (*((volatile uint32 *)0xE000E410))
#define NVIC_PRI5_REG             (*((volatile uint32 *)0xE000E414))
#define NVIC_PRI6_REG             (*((volatile uint32 *)0xE000E418))
#define NVIC_PRI7_REG             (*((volatile uint32 *)0xE000E41C))
#define NVIC_PRI8_REG             (*((volatile uint32 *)0xE000E420))
#define NVIC_PRI9_REG             (*((volatile uint32 *)0xE000E424))
#define NVIC_PRI10_REG            (*((volatile uint32 *)0xE000E428))
#define NVIC_PRI11_REG            (*((volatile uint32 *)0xE000E42C))
#define NVIC_PRI12_REG            (*((volatile uint32 *)0xE000E430))
#define NVIC_PRI13_REG            (*((volatile uint32 *)0xE000E434))
#define NVIC_PRI14_REG            (*((volatile uint32 *)0xE000E438))
#define NVIC_PRI15_REG            (*((volatile uint32 *)0xE000E43C))
#define NVIC_PRI16_REG            (*((volatile uint32 *)0xE000E440))
#define NVIC_PRI17_REG            (*((volatile uint32 *)0xE000E444))
#define NVIC_PRI18_REG            (*((volatile uint32 *)0xE000E448))
#define NVIC_PRI19_REG            (*((volatile uint32 *)0xE000E44C))
#define NVIC_PRI20_REG            (*((volatile uint32 *)0xE000E450))
#define NVIC_PRI21_REG            (*((volatile uint32 *)0xE000E454))
#define NVIC_PRI22_REG            (*((volatile uint32 *)0xE000E458))
#define NVIC_PRI23_REG            (*((volatile uint32 *)0xE000E45C))
#define NVIC_PRI24_REG            (*((volatile uint32 *)0xE000E460))
#define NVIC_PRI25_REG            (*((volatile uint32 *)0xE000E464))
#define NVIC_PRI26_REG            (*((volatile uint32 *)0xE000E468))
#define NVIC_PRI27_REG            (*((volatile uint32 *)0xE000E46C))
#define NVIC_PRI28_REG            (*((volatile uint32 *)0xE000E470))
#define NVIC_PRI29_REG            (*((volatile uint32 *)0xE000E474))
#define NVIC_PRI30_REG            (*((volatile uint32 *)0xE000E478))
#define NVIC_PRI31_REG            (*((volatile uint32 *)0xE000E47C))
#define NVIC_PRI32_REG            (*((volatile uint32 *)0xE000E480))
#define NVIC_PRI33_REG            (*((volatile uint32 *)0xE000E484))
#define NVIC_PRI34_REG            (*((volatile uint32 *)0xE000E488))

#define NVIC_EN0_REG              (*((volatile uint32 *)0xE000E100))
#define NVIC_EN1_REG              (*((volatile uint32 *)0xE000E104))
#define NVIC_EN2_REG              (*((volatile uint32 *)0xE000E108))
#define NVIC_EN3_REG              (*((volatile uint32 *)0xE000E10C))
#define NVIC_EN4_REG              (*((volatile uint32 *)0xE000E110))
#define NVIC_DIS0_REG             (*((volatile uint32 *)0xE000E180))
#define NVIC_DIS1_REG             (*((volatile uint32 *)0xE000E184))
#define NVIC_DIS2_REG             (*((volatile uint32 *)0xE000E188))
#define NVIC_DIS3_REG             (*((volatile uint32 *)0xE000E18C))
#define NVIC_DIS4_REG             (*((volatile uint32 *)0xE000E190))

#define NVIC_SYSTEM_PRI1_REG      (*((volatile uint32 *)0xE000ED18))
#define NVIC_SYSTEM_PRI2_REG      (*((volatile uint32 *)0xE000ED1C))
#define NVIC_SYSTEM_PRI3_REG      (*((volatile uint32 *)0xE000ED20))
#define NVIC_SYSTEM_SYSHNDCTRL    (*((volatile uint32 *)0xE000ED24))


/*****************************************************************************
 *                  Watchdog Timer registers (WATCHDOG0)                     *
 *****************************************************************************/
#define WATCHDOG0_LOAD_REG        (*((volatile uint32_t *)0x40000000))
#define WATCHDOG0_VALUE_REG       (*((volatile uint32_t *)0x40000004))
#define WATCHDOG0_CTL_REG         (*((volatile uint32_t *)0x40000008))
#define WATCHDOG0_ICR_REG         (*((volatile uint32_t *)0x4000000C))
#define WATCHDOG0_RIS_REG         (*((volatile uint32_t *)0x40000010))
#define WATCHDOG0_MIS_REG         (*((volatile uint32_t *)0x40000014))
#define WATCHDOG0_TEST_REG        (*((volatile uint32_t *)0x40000418))
#define WATCHDOG0_LOCK_REG        (*((volatile uint32_t *)0x40000C00))


/*****************************************************************************
                    Watchdog Timer registers (WATCHDOG1)
 *****************************************************************************/
#define WATCHDOG1_LOAD_REG        (*((volatile uint32_t *)0x40001000))
#define WATCHDOG1_VALUE_REG       (*((volatile uint32_t *)0x40001004))
#define WATCHDOG1_CTL_REG         (*((volatile uint32_t *)0x40001008))
#define WATCHDOG1_ICR_REG         (*((volatile uint32_t *)0x4000100C))
#define WATCHDOG1_RIS_REG         (*((volatile uint32_t *)0x40001010))
#define WATCHDOG1_MIS_REG         (*((volatile uint32_t *)0x40001014))
#define WATCHDOG1_TEST_REG        (*((volatile uint32_t *)0x40001418))
#define WATCHDOG1_LOCK_REG        (*((volatile uint32_t *)0x40001C00))

/*****************************************************************************
 *The following are defines for the bit fields in the WDT_O_LOAD register.
 *****************************************************************************/
#define WDT_LOAD_M              0xFFFFFFFF  // Watchdog Load Value
#define WDT_LOAD_S              0

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_VALUE register.
//
//*****************************************************************************
#define WDT_VALUE_M             0xFFFFFFFF  // Watchdog Value
#define WDT_VALUE_S             0

/*****************************************************************************
 The following are defines for the bit fields in the WDT_O_CTL register.
*******************************************************************************/
#define WDT_CTL_WRC             0x80000000  // Write Complete
#define WDT_CTL_INTTYPE         0x00000004  // Watchdog Interrupt Type
#define WDT_CTL_RESEN           0x00000002  // Watchdog Reset Enable
#define WDT_CTL_INTEN           0x00000001  // Watchdog Interrupt Enable

/****************************************************************************
The following are defines for the bit fields in the WDT_O_ICR register.
*****************************************************************************/
#define WDT_ICR_M               0xFFFFFFFF  // Watchdog Interrupt Clear
#define WDT_ICR_S               0

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_RIS register.
//
//*****************************************************************************
#define WDT_RIS_WDTRIS          0x00000001  // Watchdog Raw Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_MIS register.
//
//*****************************************************************************
#define WDT_MIS_WDTMIS          0x00000001  // Watchdog Masked Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_TEST register.
//
//*****************************************************************************
#define WDT_TEST_STALL          0x00000100  // Watchdog Stall Enable

/*****************************************************************************
 The following are defines for the bit fields in the WDT_O_LOCK register.
*****************************************************************************/
#define WDT_LOCK_M              0xFFFFFFFF  // Watchdog Lock
#define WDT_LOCK_UNLOCKED       0x00000000  // Unlocked
#define WDT_LOCK_LOCKED         0x00000001  // Locked
#define WDT_LOCK_UNLOCK         0x1ACCE551  // Unlocks the watchdog timer

#endif
