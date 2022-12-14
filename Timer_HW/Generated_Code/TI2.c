/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : TI2.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : TimerInt
**     Version     : Component 02.161, Driver 01.02, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-18, 11:19, # CodeGen: 9
**     Abstract    :
**         This component "TimerInt" implements a periodic interrupt.
**         When the component and its events are enabled, the "OnInterrupt"
**         event is called periodically with the period that you specify.
**         TimerInt supports also changing the period in runtime.
**         The source of periodic interrupt can be timer compare or reload
**         register or timer-overflow interrupt (of free running counter).
**     Settings    :
**         Timer name                  : TPM0_CNT (16-bit)
**         Compare name                : TPM0_MOD
**         Counter shared              : No
**
**         High speed mode
**             Prescaler               : divide-by-[driven by slave component]
**             Clock                   : [driven by slave component] Hz
**           Initial period/frequency
**             Xtal ticks              : ---
**             microseconds            : ---
**             milliseconds            : 200
**             seconds                 : ---
**             seconds (real)          : 200
**             Hz                      : ---
**             kHz                     : ---
**             MHz                     : ---
**
**         Runtime setting             : none
**
**         Initialization:
**              Timer                  : Enabled
**              Events                 : Enabled
**
**         Timer registers
**              Counter                : TPM0_CNT  [0x40038004]
**              Mode                   : TPM0_SC   [0x40038000]
**              Run                    : TPM0_SC   [0x40038000]
**              Prescaler              : TPM0_SC   [0x40038000]
**
**         Compare registers
**              Compare                : TPM0_MOD  [0x40038008]
**
**         Flip-flop registers
**              Mode                   : TPM0_SC   [0x40038000]
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file TI2.c
** @version 01.02
** @brief
**         This component "TimerInt" implements a periodic interrupt.
**         When the component and its events are enabled, the "OnInterrupt"
**         event is called periodically with the period that you specify.
**         TimerInt supports also changing the period in runtime.
**         The source of periodic interrupt can be timer compare or reload
**         register or timer-overflow interrupt (of free running counter).
*/         
/*!
**  @addtogroup TI2_module TI2 module documentation
**  @{
*/         

/* MODULE TI2. */

#include "Events.h"
#include "TI2.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  TI2_OnInterrupt (component TimerInt)
**
**     Description :
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void TimerIntLdd2_OnInterrupt(LDD_TUserData *UserDataPtr)
{
  (void)UserDataPtr;                   /* Parameter is not used, suppress unused argument warning */
  TI2_OnInterrupt();                   /* Invoke OnInterrupt event */
}

/* END TI2. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
