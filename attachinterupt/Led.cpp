/*
 * Led.cpp
 *
 * Created: 14/11/2018 14:50:29
 Description: Code for LED's
 *  Author: Dorde Obradovic
			George Zhou
 */ 
#include <Arduino.h>
#include "Math.h"
#include "Led.h"
void greenLedOn(){
	digitalWrite(GREENLED, HIGH);
}

void redLedOn(){
	digitalWrite(REDLED, HIGH);
}

void ledOff(){
	digitalWrite(REDLED,LOW);
	digitalWrite(GREENLED,LOW);
}
void yellowLedBlink(int delayTime){

	digitalWrite(YELLOWLED,HIGH);
	delay(delayTime);
	digitalWrite(YELLOWLED,LOW);
	delay(delayTime);
}


