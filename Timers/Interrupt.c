#include <W78E052.h>
void myIsr_Ex0(void) interrupt 0
{
	int i,j;
	short sBitPosition ;
	for(sBitPosition=0x1; sBitPosition<=0x80; sBitPosition=sBitPosition<<1)
	{
		P0 = sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
	}
}

void myIsr_Ex1(void) interrupt 2
{
	int i,j;
	short sBitPosition ;
	for(sBitPosition=0x1; sBitPosition<=0x80; sBitPosition=sBitPosition<<1)
	{
		P1 = sBitPosition;
		for(i=0;i<0x7FF;i++)
			for(j=0;j<0x7FF;j++);
	}
}
void main()
{
	int i,j ;
	short sBitPosition;
	EX0 = 1;
	IT0 = 1;
	EX1 = 1; // enabling external interrupt 1. P3.3
	IT1 = 1; // 1:falling edge . 0: level edge
	PX0 = 1; Indicates the priority(it can be PX1= 1 for prioritising 1 over 0)
	EA = 1;	// Enable All. To check the interrupt if available
	
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