/*
 * Lab1A.c
 *
 * Created: 16/9/2024 4:32:16 pm
 * Author : sashe
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRD = 0xFF;


    while (1) 
    {
	
		PORTD = 0x55;
		_delay_ms(1000);
		PORTD = 0xAA;
		_delay_ms(1000);
	}
	
	return 0;
}

/*int main(void)
{
DDRD = 0xFF;
while(1)
{
PORTD = 0x55;
}
}*/

	