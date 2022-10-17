#include <W78E052.h>
#define TIMER0_VALUE_10mSec 0xDC00
#define TIMER0_H ((TIMER0_VALUE_10mSec & 0xFF00) >> 8)
#define TIMER0_L (TIMER0_VALUE_10mSec & 0x00FF)

#define  LED P10
void timer_interrupt1 () interrupt 1
{
	static int i;
	TL0 = TIMER0_L;	//0x00. Mandate to reload the values for TH and TL
	TH0 = TIMER0_H;//0Xdc
	/* loop for 100*10msec = 1000msec/sec */
	if( i >=100)
	{
		LED = ~LED;
		i = 0; 
	}
	else 
	{
		i++;
	}
}

//#define	USER_DELAY_VALUE 0xFF // reduced delay
void main()
{
	int i, j;
	short sBitPosition;
	TMOD = 0X01; 		// TIMER 1 NOT USED AND TIMER 0 IS USED
	TH0 = TIMER0_H;
	TL0 = TIMER0_L;
	ET0 = 1;
	EA= 1;
	TR0 = 1;// START TIMER0
	while(1)
	{
		for(sBitPosition=0x1; sBitPosition<=0x80; sBitPosition=sBitPosition<<1)
		{
		P2= sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
		}
	}
}