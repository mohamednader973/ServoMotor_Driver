/*
 * Servo.c
 *
 * Created: 9/27/2020 8:51:54 PM
 *  Author: monad
 */ 
#include "Servo.h"
#include <avr/io.h>
void Servo_Init(void)
{
	IN_CAP_REG_HB=0x13;
	IN_CAP_REG_LB=0x87;
	//ICR1=4999;
	SetBIT(TCNT_CMP_REGA ,WaveGenbit_11);
	SetBIT(TCNT_CMP_REGA ,CMP_OUT_MODE_A1);
	SetBIT(TCNT_CMP_REGB ,WaveGenbit_12);
	SetBIT(TCNT_CMP_REGB ,WaveGenbit_13);
	SetBIT(TCNT_CMP_REGB ,Prescl_10);
	SetBIT(TCNT_CMP_REGB ,Prescl_11);
}

void Servo_Func(unsigned short angle)
{
	unsigned short value;

	//OCR1A=(((angle-Mini_angle)*(Max_count-Mini_count))/(Max_angle-Mini_angle))+Mini_count;
	value=(((angle-Mini_angle)*(Max_count-Mini_count))/(Max_angle-Mini_angle))+Mini_count;
	IN_CAP_REG_HB_A =(value>>8);
	IN_CAP_REG_LB_A =(value & 0X00FF);

	
}