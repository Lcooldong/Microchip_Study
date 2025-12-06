/*
 * Clock.c
 *
 * Created: 2025-12-06 오후 6:10:23
 * Author : ncool
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <util/LCD.h>
#include <stdlib.h>




int main(void)
{
    lcd_init();
	int year = 2027;
	int month = 2;
	int date = 26;
	int total_date = 0;
	int i = 0;
	
	int second = 2;
	int minute = 0;
	int hour = 11;
	int appm = 1;
	
	char *month_table[] = {"000", "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	char *day_table[] = {"SUN", "MON", "TUE","WED","THU","FRI","SAT"};
	int month_date_table[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//if((year%4==0)&&(year%100 !=0)||(year %400 == 0)) month_date_table[2] = 29;
	
	DDRA = 0xFF;
	PORTA = 0xFF;
	int j = 0;
	int value = 0x01;
	
    while (1) 
    {
		PORTA = ~value;
		value <<= 1;
		if(value == 0x100) value = 0x01;
		
		_delay_ms(1000);
		second++;
		lcd_position(0, 1);
		lcd_write_char(second);
		//if(second >= 60) {second = 0; minute++;}
		//if(minute >= 60) {minute = 0; hour++;}
		//if(hour >=13) hour = 1;
		//if((hour == 12)&&(minute == 0)&&(second == 0)){appm ++;}
		//if(appm == 2) {appm = 0; date++;}
		//if(date > month_date_table[month]) {date = 1; month++;}
		//if(month >= 13) {month = 1; year++;}
			//
		//lcd_position(12, 1);
		//lcd_write_char(second/10 + '0'); lcd_write_char(second%10+'0');
		//
		//lcd_position(10, 1);
		//lcd_write_char(':');
		//
		//lcd_position(8,1);
		//lcd_write_char(minute/10 + '0'); lcd_write_char(minute%10+'0');
		//
		//lcd_position(6, 1);
		//lcd_write_char(':');
		//
		//lcd_position(4, 1);
		//lcd_write_char(hour/10 + '0'); lcd_write_char(hour%10+'0');
		//
		//lcd_position(1, 1);
		//if(appm) lcd_write_char('P');
		//else lcd_write_char('A');
		//
		//lcd_position(2, 1); lcd_write_char('M');
		//
		//_delay_ms(10); second++;
		//
		//lcd_position(1, 0);
		//lcd_write_char(year/1000 + '0');
		//lcd_write_char((year/100)%10 + '0');
		//lcd_write_char((year/10)%10 + '0');
		//lcd_write_char(year%10 + '0');
		////
		//lcd_display_string(6, 0, month_table[month]);
		////
		//lcd_position(10, 0);
		//lcd_write_char(date/10 + '0'); lcd_write_char(date % 10 + '0');
		//
		//total_date = (year - 1) + (year - 1)/4 - (year - 1)/100 + (year - 1)/400 + date;
		//for (i = 1; i<month; i++) total_date += month_date_table[i];
		//
		//lcd_display_string(13, 0, day_table[total_date%7]);
		
		
		
		
		return 0;
    }
}

