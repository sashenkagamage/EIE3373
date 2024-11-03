/*
 * Lab1B-2.c
 *
 * Created: 24/9/2024 9:21:33 am
 * Author : sashe
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRD = 0xFF;
   DDRB &= ~(1 << 0); //setting to 0 as input

  
  
   unsigned char state = 0;

    while (1) 
    {

		if  (PINB & (1 << 0)){
			_delay_ms(10);
			
				if (state == 0){
					PORTD = 0xFF;
					state = 1;
				}else{
					PORTD = 0x00;
					state = 0; 
					}
					 while (PINB & (1 << 0));
		}

	}
	return 0;
}

