#include "system.h"


void System_Init(void)
{
	Led_Init();
}


void Delay_Time(unsigned int timer)
{
	unsigned int i,j;
	for(i = timer; i > 0; i --)
	{
		for(j =200; j > 0; j--);
	}
}

void BackCall(unsigned int timer,void (* ptr)(unsigned int))
{
	(* ptr)(timer);
}


void System_Handle(void)
{
	Led_Open();
	BackCall(5000,Delay_Time);
	Led_Close();
	BackCall(5000,Delay_Time);
}


