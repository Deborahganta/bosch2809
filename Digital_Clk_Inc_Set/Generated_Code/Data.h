/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Data.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : BitsIO
**     Version     : Component 02.108, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-18, 17:11, # CodeGen: 6
**     Abstract    :
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
**     Settings    :
**         Port name                   : PTC
**
**         Bit mask of the port        : 0x00FE
**         Number of bits/pins         : 7
**         Single bit numbers          : 0 to 6
**         Values range                : 0 to 127
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0 = 000H
**         Initial pull option         : off
**
**         Port data register          : GPIOC_PDOR [0x400FF080]
**         Port control register       : GPIOC_PDDR [0x400FF094]
**
**             ----------------------------------------------------
**                   Bit     |   Pin   |   Name
**             ----------------------------------------------------
**                    0      |    56   |   ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0
**                    1      |    57   |   ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1
**                    2      |    58   |   PTC3/LLWU_P7/UART1_RX/TPM0_CH2/CLKOUTa
**                    3      |    61   |   PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/TPM0_CH3
**                    4      |    62   |   PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT
**                    5      |    63   |   CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/SPI0_MISO
**                    6      |    64   |   CMP0_IN1/PTC7/SPI0_MISO/SPI0_MOSI
**             ----------------------------------------------------
**
**         Optimization for            : speed
**     Contents    :
**         GetDir - bool Data_GetDir(void);
**         GetVal - byte Data_GetVal(void);
**         PutVal - void Data_PutVal(byte Val);
**         GetBit - bool Data_GetBit(byte Bit);
**         PutBit - void Data_PutBit(byte Bit, bool Val);
**         SetBit - void Data_SetBit(byte Bit);
**         ClrBit - void Data_ClrBit(byte Bit);
**         NegBit - void Data_NegBit(byte Bit);
**
**Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**
**http      : www.freescale.com
**mail      : support@freescale.com
** ###################################################################*/
/*!
** @file Data.h
** @version 01.00
** @brief
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
*/         
/*!
**  @addtogroup Data_module Data module documentation
**  @{
*/         

#ifndef __Data_H
#define __Data_H

/* MODULE Data. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "BitsIoLdd1.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 




/*
** ===================================================================
**     Method      :  Data_GetDir (component BitsIO)
**     Description :
**         This method returns direction of the component.
**     Parameters  : None
**     Returns     :
**         ---        - Direction of the component (always <true>, Output only)
**                      <false> = Input, <true> = Output
** ===================================================================
*/
#define Data_GetDir() (BitsIoLdd1_GetDir(BitsIoLdd1_DeviceData))

/*
** ===================================================================
**     Method      :  Data_GetVal (component BitsIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pins and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---        - Input value (0 to 127)
** ===================================================================
*/
#define Data_GetVal() ((byte)BitsIoLdd1_GetVal(BitsIoLdd1_DeviceData))

/*
** ===================================================================
**     Method      :  Data_PutVal (component BitsIO)
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val        - Output value (0 to 127)
**     Returns     : Nothing
** ===================================================================
*/
#define Data_PutVal(Val) (BitsIoLdd1_PutVal(BitsIoLdd1_DeviceData, ((dword)(Val))))

bool Data_GetBit(byte Bit);
/*
** ===================================================================
**     Method      :  Data_GetBit (component BitsIO)
**     Description :
**         This method returns the specified bit of the input value.
**           a) direction = Input  : reads the input value from pins
**                                   and returns the specified bit
**           b) direction = Output : returns the specified bit
**                                   of the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to read (0 to 6)
**     Returns     :
**         ---        - Value of the specified bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
** ===================================================================
*/

/*
** ===================================================================
**     Method      :  Data_PutBit (component BitsIO)
**     Description :
**         This method writes the new value to the specified bit
**         of the output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit (0 to 6)
**         Val        - New value of the bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
**     Returns     : Nothing
** ===================================================================
*/
#define Data_PutBit(Bit,Val) ((void)BitsIoLdd1_PutBit(BitsIoLdd1_DeviceData, (Bit), (Val)))

/*
** ===================================================================
**     Method      :  Data_SetBit (component BitsIO)
**     Description :
**         This method sets (sets to one) the specified bit of the
**         output value.
**         [ It is the same as "PutBit(Bit,TRUE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to set (0 to 6)
**     Returns     : Nothing
** ===================================================================
*/
#define Data_SetBit(Bit) ((void)BitsIoLdd1_SetBit(BitsIoLdd1_DeviceData, (Bit)))

/*
** ===================================================================
**     Method      :  Data_ClrBit (component BitsIO)
**     Description :
**         This method clears (sets to zero) the specified bit
**         of the output value.
**         [ It is the same as "PutBit(Bit,FALSE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to clear (0 to 6)
**     Returns     : Nothing
** ===================================================================
*/
#define Data_ClrBit(Bit) ((void)BitsIoLdd1_ClrBit(BitsIoLdd1_DeviceData, (Bit)))

/*
** ===================================================================
**     Method      :  Data_NegBit (component BitsIO)
**     Description :
**         This method negates (inverts) the specified bit of the
**         output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to invert (0 to 31)
**     Returns     : Nothing
** ===================================================================
*/
#define Data_NegBit(Bit) ((void)BitsIoLdd1_NegBit(BitsIoLdd1_DeviceData, (Bit)))

/* END Data. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Data_H */
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
