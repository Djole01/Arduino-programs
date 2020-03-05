/*
Title: 7 segment display
Author: Dorde Obradovic, Zhou Yeming
Description: coding a 7 segment display 
*/



#include <Arduino.h>


void setup() {
  

	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
}

void loop() {
	
	
	
	// loop for E and 3, three times.
	for (int i=0;i<3;i++)
	{

		digitalWrite(2,LOW);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
		delay(1000);
		digitalWrite(2,LOW);
		digitalWrite(8,HIGH);
		digitalWrite(7,LOW);
		digitalWrite(6,HIGH);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);
		delay(1000);
	}
	// turn off display.
	digitalWrite(2,HIGH);
	digitalWrite(8,HIGH);
	digitalWrite(7,HIGH);
	digitalWrite(6,HIGH);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);

	// counter clockwise circle
	digitalWrite(2,HIGH);
	digitalWrite(8,HIGH);
	digitalWrite(7,HIGH);
	digitalWrite(6,HIGH);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	delay(300);

	for(int n=0;n<3;n++)
	{
	
	for (int o = 1; o < 7; o++)
		{
			digitalWrite(o,LOW);
			delay(300);
			digitalWrite(o,HIGH);
		}
	digitalWrite(8,LOW);
	delay(300);
	digitalWrite(8,HIGH);
	}
	delay(1000);
	// turn all led's on and off 1 by 1.
	for(n=0;n<3;n++)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);

			for (o = 1; o < 9; o++)
			{
				digitalWrite(o,HIGH);
				delay(300);
			
			}
		
	}
	delay(1000);
	// clockwise circle
	digitalWrite(2,HIGH);
	digitalWrite(8,HIGH);
	digitalWrite(7,HIGH);
	digitalWrite(6,HIGH);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	delay(300);
	
	for(n=0;n<3;n++)
	{
	digitalWrite(8,LOW);
	delay(300);
	digitalWrite(8,HIGH);
	for (o = 6; o > 1; o--)
		{
			digitalWrite(o,LOW);
			delay(300);
			digitalWrite(o,HIGH);
		}
		
	}
	delay(1000);
	
	
			exit(0);
}
