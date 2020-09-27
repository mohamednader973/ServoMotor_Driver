/*
 * Servo.h
 *
 * Created: 9/27/2020 8:52:44 PM
 *  Author: monad
 */ 


#ifndef SERVO_H_
#define SERVO_H_

#include <avr/interrupt.h>
#define TCNT_CMP_REGA     (*((volatile unsigned char*)0x4F))         //TCCR1A
#define TCNT_CMP_REGB     (*((volatile unsigned char*)0x4E))        //TCCR1B
#define IN_CAP_REG_HB     (*((volatile unsigned char*)0x47))        //ICR1H
#define IN_CAP_REG_LB     (*((volatile unsigned char*)0x46))        //ICR1L
#define IN_CAP_REG_HB_A   (*((volatile unsigned char*)0x4B))        //OCR1H
#define IN_CAP_REG_LB_A   (*((volatile unsigned char*)0x4A))        //OCR1L
#define SetBIT(REG,BIT)    REG |=(1<<BIT)
#define ClearBIT(REG,BIT)  REG &=~(1<<BIT)
#define Prescl_12             2
#define Prescl_11             1
#define Prescl_10             0
#define WaveGenbit_11         1
#define WaveGenbit_10         0
#define WaveGenbit_13         4
#define WaveGenbit_12         3
#define CMP_OUT_MODE_A1       7
#define CMP_OUT_MODE_A0       6
#define Mini_count            250
#define Max_count             500
#define Mini_angle            0
#define Max_angle             180
void Servo_Init(void);
void Servo_Func(unsigned short angle);
//0x1387
#endif /* SERVO_H_ */
// ICR=VALUE;
//IN_CAP_REG_HB_A =(VALUE>>8);
//IN_CAP_REG_LB_A =(VALUE & 0X0F);