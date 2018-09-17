#include "bsp_led.h"


void Led_Open(void)
{
	LED_STATUS(1); 
}

void Led_Close(void)
{
	LED_STATUS(0); 
}


void Led_Init(void)
{
	P2CON |= 0X40;
	P2PH  &= ~0X40;
	Led_Close();
}


