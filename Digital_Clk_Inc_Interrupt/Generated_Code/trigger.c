/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : trigger.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : BitsIO
**     Version     : Component 02.108, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-18, 16:48, # CodeGen: 1
**     Abstract    :
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
**     Settings    :
**         Port name                   : PTD
**
**         Bit mask of the port        : 0x001E
**         Number of bits/pins         : 4
**         Single bit numbers          : 0 to 3
**         Values range                : 0 to 15
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0 = 000H
**         Initial pull option         : off
**
**         Port data register          : GPIOD_PDOR [0x400FF0C0]
**         Port control register       : GPIOD_PDDR [0x400FF0D4]
**
**             ----------------------------------------------------
**                   Bit     |   Pin   |   Name
**             ----------------------------------------------------
**                    0      |    74   |   ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1
**                    1      |    75   |   PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO
**                    2      |    76   |   PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI
**                    3      |    77   |   PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4
**             ----------------------------------------------------
**
**         Optimization for            : speed
**     Contents    :
**         GetDir - bool trigger_GetDir(void);
**         GetVal - byte trigger_GetVal(void);
**         PutVal - void trigger_PutVal(byte Val);
**         GetBit - bool trigger_GetBit(byte Bit);
**         PutBit - void trigger_PutBit(byte Bit, bool Val);
**         SetBit - void trigger_SetBit(byte Bit);
**         ClrBit - void trigger_ClrBit(byte Bit);
**         NegBit - void trigger_NegBit(byte Bit);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file trigger.c
** @version 01.00
** @brief
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
*/         
/*!
**  @addtogroup trigger_module trigger module documentation
**  @{
*/         

/* MODULE trigger. */

#include "trigger.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  trigger_GetDir (component BitsIO)
**     Description :
**         This method returns direction of the component.
**     Parameters  : None
**     Returns     :
**         ---        - Direction of the component (always <true>, Output only)
**                      <false> = Input, <true> = Output
** ===================================================================
*/
/*
bool trigger_GetDir(void)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_GetVal (component BitsIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pins and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---        - Input value (0 to 15)
** ===================================================================
*/
/*
byte trigger_GetVal(void)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_PutVal (component BitsIO)
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val        - Output value (0 to 15)
**     Returns     : Nothing
** ===================================================================
*/
/*
void trigger_PutVal(byte Val)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_GetBit (component BitsIO)
**     Description :
**         This method returns the specified bit of the input value.
**           a) direction = Input  : reads the input value from pins
**                                   and returns the specified bit
**           b) direction = Output : returns the specified bit
**                                   of the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to read (0 to 3)
**     Returns     :
**         ---        - Value of the specified bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
** ===================================================================
*/
bool trigger_GetBit(byte Bit)
{
  bool BitVal;

  (void)BitsIoLdd2_GetBit(BitsIoLdd2_DeviceData, Bit, &BitVal);
  return (BitVal);
}

/*
** ===================================================================
**     Method      :  trigger_PutBit (component BitsIO)
**     Description :
**         This method writes the new value to the specified bit
**         of the output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit (0 to 3)
**         Val        - New value of the bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
**     Returns     : Nothing
** ===================================================================
*/
/*
void trigger_PutBit(byte Bit, bool Val)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_SetBit (component BitsIO)
**     Description :
**         This method sets (sets to one) the specified bit of the
**         output value.
**         [ It is the same as "PutBit(Bit,TRUE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to set (0 to 3)
**     Returns     : Nothing
** ===================================================================
*/
/*
void trigger_SetBit(byte Bit)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_ClrBit (component BitsIO)
**     Description :
**         This method clears (sets to zero) the specified bit
**         of the output value.
**         [ It is the same as "PutBit(Bit,FALSE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to clear (0 to 3)
**     Returns     : Nothing
** ===================================================================
*/
/*
void trigger_ClrBit(byte Bit)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/*
** ===================================================================
**     Method      :  trigger_NegBit (component BitsIO)
**     Description :
**         This method negates (inverts) the specified bit of the
**         output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to invert (0 to 31)
**     Returns     : Nothing
** ===================================================================
*/
/*
void trigger_NegBit(byte Bit)

**  This method is implemented as a macro. See trigger.h file.  **
*/

/* END trigger. */

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
