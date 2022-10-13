/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-13, 09:42, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "lcd_rs.h"
#include "BitIoLdd1.h"
#include "lcd_read_write.h"
#include "BitIoLdd2.h"
#include "lcd_enable.h"
#include "BitIoLdd3.h"
#include "lcd_data_cmd_pins.h"
#include "BitsIoLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h" 



/* User includes (#include below this line is not maintained by Processor Expert) */
void lcd_delay(unsigned char ms)
{
	unsigned char n;
	unsigned int i;
	for(n=0; n<ms; n++)
		for(i=0; i<0x7fff; i++);
}
void lcd_command(unsigned char command)
{
	lcd_data_cmd_pins_PutVal(command);
	lcd_rs_PutVal(0);				//rs=0 ->command
	lcd_read_write_PutVal(0);
	lcd_enable_PutVal(1);
	lcd_delay(1);
	lcd_enable_PutVal(0);
}

void lcd_data(unsigned char ascii)
{
	lcd_data_cmd_pins_PutVal(ascii);
	lcd_rs_PutVal(1);
	lcd_read_write_PutVal(0);
	lcd_enable_PutVal(1);
	lcd_delay(1);
	lcd_enable_PutVal(0);
}

void lcd_puts(unsigned char *lcd_string)
{
	while(*lcd_string)
	{
		lcd_data(*lcd_string++);
	}
}

void lcd_init()
{
	lcd_command(0x38);
	lcd_command(0x0f);
	lcd_command(0x06);
	//lcd_command(0x01);
	lcd_command(0x80);
	lcd_delay(1);
}

void lcd_testingApp(int th, int uh, int tm, int um, int ts, int us)
{
	lcd_init();
	lcd_data(th);
	lcd_data(uh);
	lcd_data(':');
	lcd_data(tm);
	lcd_data(um);
	lcd_data(':');
	lcd_data(ts);
	lcd_data(us);
}

void run()
{
	int th,uh,tm,um,ts,us, j;
	
for(th=48; th<=50; th++)
	{
		for(uh=48; uh<=51; uh++)
		{
			for(tm = 48; tm<=53; tm++)
					 {
						 for(um=48; um<=57; um++)
						 {
							 for(ts=48; ts<=53; ts++)
							 {
								 for(us=48; us<=57; us++)
								 {
									 lcd_testingApp(th,uh,tm,um,ts,us);
									 for(j=0;j<0x106fff;j++);
								 }
							 }
							 
						 }
					 }
		}
	}
}

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */

  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
while(1)
{
	run(0,0,0,0,0,0);
}  
 
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
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
