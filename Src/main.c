#include "led.h"


int main(void)
{
	RCC_Config_HSE();
	GPIO_Config();

	while(1)
	{
		LED_ON();
		for(int i = 0; i<160000; i++);
		LED_OFF();
		for(int i = 0; i<160000; i++);

	}
}
