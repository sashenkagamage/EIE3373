/*
 * Lab1B-1.c
 *
 * Created: 24/9/2024 9:20:08 am
 * Author : sashe
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	DDRD |= (1<<2); //setting to 1 as output
	DDRB &= ~(1 << 0); //setting to 0 as input
	PORTD &= ~(1<<2);
	
	unsigned char press;


	while (1)
	{
		press = PINB & (1 << 0);;
		
		if (press == 0){
			PORTD &= ~(1 << 2);
			}else{
			PORTD |=(1<<2);
		}

	}
	return 0;
}