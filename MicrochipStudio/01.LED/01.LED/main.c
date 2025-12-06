/*
 * 01.LED.c
 *
 * Created: 2025-12-03 오후 10:44:16
 * Author : n_coo
 */ 

#define F_CPU 16000000UL  // 16MHz , util/delay.h 보다 앞에 있어야함
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	
	DDRA = 0xFF; //DDRA = 0b11111111; , DDRA = 255
	
    while (1)
    {
		PORTA = 0b01010101;
		_delay_ms(1000);
		PORTA = 0b10101010;
		_delay_ms(1000);
    }
	
	return 0;
}

