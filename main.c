#include "led.h" 
#include "delay.h" 
#include "sys.h"

int main(void)

{

	delay_init();                             //延时函数初始化
	LED_Init();                               //初始化与 LED 连接的硬件接口
	while(1)
		
	 {      
		 LED0=0;
		 LED1=1;
		 delay_ms(500);                       //延时 500ms 
		 LED0=1;
		 LED1=0;
		 delay_ms(500);                       //延时 500ms

	 }

 }
