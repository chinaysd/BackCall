#ifndef _BSP_LED_H_
#define _BSP_LED_H_

#include "sc92f732x_c.h"


#define LED_ENABLE           1
#define LED_DISABLE          0



#if LED_ENABLE
#define LED_PORT             P2
#define LED_PIN              P26
#define LED_STATUS(X)        P26=X
#endif




void Led_Init(void);
void Led_Open(void);
void Led_Close(void);



#endif


