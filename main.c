#include "led.h" 
#include "delay.h" 
#include "sys.h"

int main(void)

{

	delay_init();                             //��ʱ������ʼ��
	LED_Init();                               //��ʼ���� LED ���ӵ�Ӳ���ӿ�
	while(1)
		
	 {      
		 LED0=0;
		 LED1=1;
		 delay_ms(500);                       //��ʱ 500ms 
		 LED0=1;
		 LED1=0;
		 delay_ms(500);                       //��ʱ 500ms

	 }

 }
