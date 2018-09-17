#include "system.h"


void System_Init(void)
{
	Led_Init();
}

void Delay_Time(unsigned int timer)
{
	unsigned int i,j;
	for(i = timer;i > 0 ; i--)
	{
		for(j = 200; j > 0 ; j --);
	}
}


int PrintNum_Open(int n){  
   //printf("Test1 is called,the number is %d\n",n); 
   Led_Open();
	n ++;
	return 1;
}

int PrintNum_Close(int n){  
   //printf("Test1 is called,the number is %d\n",n); 
   Led_Close();
	n ++;
	return 1;
}
  
void ShowNum(int n,void (* ptr)(int)){  
   (* ptr)(n);  
}


void System_Handle(void)
{
	ShowNum(1000,PrintNum_Open);
	Delay_Time(5000);
	ShowNum(1000,PrintNum_Close);
	Delay_Time(5000);
}

#if 0
void BackCall(void (* ptr)())
{
	(* ptr)();
}


void BackCall(void (* ptr)())
{
	
}
#endif






