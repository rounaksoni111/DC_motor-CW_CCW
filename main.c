/*
 * simple_DC_Motor_2_mar.c
 *
 * Created: 3/4/2021 10:58:07 AM
 * Author : lenovo
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC |= (1<<PC1) | (1<<PC2);
	PORTC &= (1<<PC1) | (1<<PC2);
	
	while (1)
	{
		PORTC |= (1<<PC1);	//CW
		PORTC &= ~(1<<PC2);
		_delay_ms(2000);
		
		PORTC |= (1<<PC2);		//CCW
		PORTC &= ~(1<<PC1);
		_delay_ms(2000);
	}
}


