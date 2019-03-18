/*
 * Led.h
 *
 * Created: 14/11/2018 14:51:25
 *  Author: Dorde Obradovic
			George Zhou
	Description: Header file for LED's
 */ 
#include <Arduino.h>

#ifndef LED_H_
#define LED_H_

#define GREENLED 2
#define REDLED 3
#define YELLOWLED 13
#define YELLOWLED2 7

void greenLedOn();
void redLedOn();
void yellowLedBlink(int delayTime);
void ledOff();



#endif /* LED_H_ */