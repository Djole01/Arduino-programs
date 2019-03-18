/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>
#include "Thermistor.h"
#include "Math.h"
#include "Led.h"
#include "TimerOne.h"





volatile int ledState = LOW;

void blink() {
	if (ledState == LOW) 
	{
		ledState = HIGH;
	} 
	else 
	{
		ledState = LOW;
	}
	digitalWrite(YELLOWLED2, ledState);
}
	
void setup() {
	pinMode(GREENLED,OUTPUT);
	pinMode(REDLED,OUTPUT);
	pinMode(YELLOWLED,OUTPUT);
	pinMode(THERMISTORPIN, INPUT);
	pinMode(YELLOWLED2, OUTPUT);
	 //Timer 1 interrupt function.
	Timer1.initialize(150000);
	
	Timer1.attachInterrupt(blink);
}


void loop() {
		
	float temperatureTemporary;

	 temperatureTemporary = getTemperature();
	if (temperatureTemporary < 25)
	{
		greenLedOn();
	}
	else{
		redLedOn();
	}
	delay(4000);
	ledOff();
	
	int checkBitReturn = checkBit(getVoltage());
	for (int i = 0; i<5;i++)
	{
		if (checkBitReturn == 1)
		{
		yellowLedBlink(1000);
		}
		else{
		yellowLedBlink(200);
		}
	}
}
