/*
Title: 7 segment display thermistor
Author: Dorde Obradovic, Zhou Yeming
Description: coding a 7 segment display to display temperature
*/

#include "Arduino.h"





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
	

	int thermistorPin = 0;
	int adc = 0;
	int temperature = 0;
	int temperature1 = 0;
	int temperature2 = 0; 
	int average = 0;
			
			float lookUpTable[] =
			{1.4, 4.0,  6.4,  8.8,
			 11.1,  13.4,15.6, 17.8,
			 20.0, 22.2,24.4, 26.7,
			 29.0,31.3, 33.7, 36.1,
			 38.7, 41.3, 44.1, 47.1,
			 50.2, 53.7, 55.0, 61.5,
			 66.2,71.5, 77.9, 85.7,
			 90.3,96.0, 111.2,139.5};
			
			adc = analogRead(thermistorPin);
// we convert adc to temperature with the function:
			average = (adc / 25)-10;
			// we use the look up table
			temperature= (int) lookUpTable[average];
			
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
			delay(500);
			digitalWrite(2,LOW);
			digitalWrite(8,HIGH);
			digitalWrite(7,LOW);
			digitalWrite(6,HIGH);
			digitalWrite(5,LOW);
			digitalWrite(3,LOW);
			digitalWrite(4,LOW);
			delay(500);
		}
			delay(2000);
// display temp to 7 segment display

	 temperature2 = temperature%10;
	temperature1 = (temperature -temperature2)/10;

	if (temperature1 == 0)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,LOW);
	}
	else if (temperature1 == 1)
	{
	digitalWrite(2,HIGH);
	digitalWrite(8,LOW);
	digitalWrite(7,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	}
	else if (temperature1 == 2)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,HIGH);
	digitalWrite(5,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(4,LOW);
	}
	else if (temperature1 == 3)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	}
	else if (temperature1 == 4)
	{
		digitalWrite(2,HIGH);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(4,HIGH);

	}
	else if (temperature1 == 5)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,HIGH);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,HIGH);
	}
	else if (temperature1 == 6)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,HIGH);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);
	}
	else if (temperature1 == 7)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,LOW);
		digitalWrite(7,HIGH);
		digitalWrite(6,LOW);
		digitalWrite(5,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
	}
	else if (temperature1 == 8)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);
	}
	else if (temperature1 == 9)
	{
		digitalWrite(2,LOW);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,HIGH);
	}
	delay(2000);
	if (temperature2 == 0)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,LOW);

	}
	else if (temperature2 == 1)
	{
	digitalWrite(2,HIGH);
	digitalWrite(8,LOW);
	digitalWrite(7,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);

	}
	else if (temperature2 == 2)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,HIGH);
	digitalWrite(5,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(4,LOW);

	}
	else if (temperature2 == 3)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);

	}
	else if (temperature2 == 4)
	{	
		digitalWrite(2,HIGH);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(6,LOW);
		digitalWrite(5,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(4,HIGH);

	}
	else if (temperature2 == 5)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,HIGH);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,HIGH);
	}
	else if (temperature2 == 6)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,HIGH);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,LOW);
	}
	else if (temperature2 == 7)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(5,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	}
	else if (temperature2 == 8)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,LOW);
	}
	else if (temperature2 == 9)
	{
	digitalWrite(2,LOW);
	digitalWrite(8,LOW);
	digitalWrite(7,LOW);
	digitalWrite(6,LOW);
	digitalWrite(5,LOW);
	digitalWrite(3,LOW);
	digitalWrite(4,HIGH);
	}











		
		// clockwise circle 3 times
		delay(2000);
		digitalWrite(2,HIGH);
		digitalWrite(8,HIGH);
		digitalWrite(7,HIGH);
		digitalWrite(6,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
		delay(2000);
		for(int n=0;n<3;n++){
			
			digitalWrite(8,LOW);
			delay(300);
			digitalWrite(8,HIGH);
			
			
			for (int o = 6; o > 1; o--)
			{
				digitalWrite(o,LOW);
				delay(300);
				digitalWrite(o,HIGH);
			}
			
		
	}
		delay(2000);
}
		
	



	
	
