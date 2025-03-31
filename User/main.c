#include "stm32f4xx.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	while (1)
	{
		OLED_ShowString(1, 1, "Hello World!");
		OLED_ShowChar(3, 1, 'A');
	}
}
