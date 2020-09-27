/*
 * ServoMotor_Driver.c
 *
 * Created: 9/27/2020 8:06:08 PM
 * Author : monad
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "Servo.h"
int main(void)
{
	DDRD |=(1<<5);
	Servo_Init();
    /* Replace with your application code */
    while (1) 
    {
		Servo_Func(0);
		_delay_ms(1000);
		Servo_Func(45);
		_delay_ms(1000);
		Servo_Func(90);
		_delay_ms(1000);
		Servo_Func(180);
		_delay_ms(1000);
    }
}

