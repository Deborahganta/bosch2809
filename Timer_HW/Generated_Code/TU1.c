/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : TU1.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : TimerUnit_LDD
**     Version     : Component 01.158, Driver 01.11, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-18, 12:05, # CodeGen: 11
**     Abstract    :
**          This TimerUnit component provides a low level API for unified hardware access across
**          various timer devices using the Prescaler-Counter-Compare-Capture timer structure.
**     Settings    :
**          Component name                                 : TU1
**          Module name                                    : LPTMR0
**          Counter                                        : LPTMR0_CNR
**          Counter direction                              : Up
**          Counter width                                  : 16 bits
**          Value type                                     : uint16_t
**          Input clock source                             : Internal
**            Counter frequency                            : Auto select
**          Counter restart                                : On-match
**            Period device                                : LPTMR0_CMR
**            Period                                       : 200 ms
**            Interrupt                                    : Enabled
**              Interrupt                                  : INT_LPTimer
**              Interrupt priority                         : medium priority
**          Channel list                                   : 0
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : no
**            Event mask                                   : 
**              OnCounterRestart                           : Enabled
**              OnChannel0                                 : Disabled
**              OnChannel1                                 : Disabled
**              OnChannel2                                 : Disabled
**              OnChannel3                                 : Disabled
**              OnChannel4                                 : Disabled
**              OnChannel5                                 : Disabled
**              OnChannel6                                 : Disabled
**              OnChannel7                                 : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**     Contents    :
**         Init - LDD_TDeviceData* TU1_Init(LDD_TUserData *UserDataPtr);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file TU1.c
** @version 01.11
** @brief
**          This TimerUnit component provides a low level API for unified hardware access across
**          various timer devices using the Prescaler-Counter-Compare-Capture timer structure.
*/         
/*!
**  @addtogroup TU1_module TU1 module documentation
**  @{
*/         

/* MODULE TU1. */

#include "TimerIntLdd1.h"
#include "TU1.h"
/* {Default RTOS Adapter} No RTOS includes */
#include "IO_Map.h"

#ifdef __cplusplus
extern "C" {
#endif 


typedef struct {
  uint8_t InitCntr;                    /* Number of initialization */
  LDD_TUserData *UserDataPtr;          /* RTOS device data structure */
} TU1_TDeviceData;

typedef TU1_TDeviceData *TU1_TDeviceDataPtr; /* Pointer to the device data structure. */

/* {Default RTOS Adapter} Static object used for simulation of dynamic driver memory allocation */
static TU1_TDeviceData DeviceDataPrv__DEFAULT_RTOS_ALLOC;
/* {Default RTOS Adapter} Global variable used for passing a parameter into ISR */
static TU1_TDeviceDataPtr INT_LPTimer__DEFAULT_RTOS_ISRPARAM;

#define AVAILABLE_EVENTS_MASK (LDD_TEventMask)(LDD_TIMERUNIT_ON_COUNTER_RESTART)

/* Internal method prototypes */
/*
** ===================================================================
**     Method      :  TU1_Init (component TimerUnit_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the
**         property ["Enable in init. code"] is set to "yes" value then
**         the device is also enabled (see the description of the
**         [Enable] method). In this case the [Enable] method is not
**         necessary and needn't to be generated. This method can be
**         called only once. Before the second call of Init the [Deinit]
**         must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* TU1_Init(LDD_TUserData *UserDataPtr)
{
  TU1_TDeviceData *DeviceDataPrv;

  if (PE_LDD_DeviceDataList[PE_LDD_COMPONENT_TU1_ID] == NULL) {
    /* Allocate device structure */
    /* {Default RTOS Adapter} Driver memory allocation: Dynamic allocation is simulated by a pointer to the static object */
    DeviceDataPrv = &DeviceDataPrv__DEFAULT_RTOS_ALLOC;
    DeviceDataPrv->UserDataPtr = UserDataPtr; /* Store the RTOS device structure */
    DeviceDataPrv->InitCntr = 1U;      /* First initialization */
  }
  else {
    /* Memory is already allocated */
    DeviceDataPrv = (TU1_TDeviceDataPtr) PE_LDD_DeviceDataList[PE_LDD_COMPONENT_TU1_ID];
    DeviceDataPrv->UserDataPtr = UserDataPtr; /* Store the RTOS device structure */
    DeviceDataPrv->InitCntr++;         /* Increment counter of initialization */
    return ((LDD_TDeviceData *)DeviceDataPrv); /* Return pointer to the device data structure */
  }
  /* Interrupt vector(s) allocation */
  /* {Default RTOS Adapter} Set interrupt vector: IVT is static, ISR parameter is passed by the global variable */
  INT_LPTimer__DEFAULT_RTOS_ISRPARAM = DeviceDataPrv;
  /* SIM_SCGC5: LPTMR=1 */
  SIM_SCGC5 |= SIM_SCGC5_LPTMR_MASK;                                   
  /* LPTMR0_CSR: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,TCF=1,TIE=0,TPS=0,TPP=0,TFC=0,TMS=0,TEN=0 */
  LPTMR0_CSR = (LPTMR_CSR_TCF_MASK | LPTMR_CSR_TPS(0x00)); /* Clear control register */
  /* LPTMR0_CMR: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,COMPARE=0x1999 */
  LPTMR0_CMR = LPTMR_CMR_COMPARE(0x1999); /* Set up compare register */
  /* LPTMR0_PSR: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,PRESCALE=0,PBYP=1,PCS=0 */
  LPTMR0_PSR = LPTMR_PSR_PRESCALE(0x00) |
               LPTMR_PSR_PBYP_MASK |
               LPTMR_PSR_PCS(0x00);    /* Set up prescaler register */
  /* NVIC_IPR7: PRI_28=0x80 */
  NVIC_IPR7 = (uint32_t)((NVIC_IPR7 & (uint32_t)~(uint32_t)(
               NVIC_IP_PRI_28(0x7F)
              )) | (uint32_t)(
               NVIC_IP_PRI_28(0x80)
              ));                                  
  /* NVIC_ISER: SETENA|=0x10000000 */
  NVIC_ISER |= NVIC_ISER_SETENA(0x10000000);                                   
  /* LPTMR0_CSR: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,TCF=0,TIE=1,TPS=0,TPP=0,TFC=0,TMS=0,TEN=1 */
  LPTMR0_CSR = (LPTMR_CSR_TIE_MASK | LPTMR_CSR_TPS(0x00) | LPTMR_CSR_TEN_MASK); /* Set up control register */
  /* Registration of the device structure */
  PE_LDD_RegisterDeviceStructure(PE_LDD_COMPONENT_TU1_ID,DeviceDataPrv);
  return ((LDD_TDeviceData *)DeviceDataPrv); /* Return pointer to the device data structure */
}

/*
** ===================================================================
**     Method      :  TU1_Interrupt (component TimerUnit_LDD)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and eventually invokes event(s) of the component.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(TU1_Interrupt)
{
  /* {Default RTOS Adapter} ISR parameter is passed through the global variable */
  TU1_TDeviceDataPtr DeviceDataPrv = INT_LPTimer__DEFAULT_RTOS_ISRPARAM;

  LPTMR_PDD_ClearInterruptFlag(LPTMR0_BASE_PTR); /* Clear interrupt flag */
  TU1_OnCounterRestart(DeviceDataPrv->UserDataPtr); /* Invoke OnCounterRestart event */
}

/* END TU1. */

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
