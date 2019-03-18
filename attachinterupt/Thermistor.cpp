/*
 * Thermistor.cpp
 *
 * Created: 14/11/2018 14:51:03
	Description: Code for temperature from thermistor
 *  Author: Dorde Obradovic,
			George Zhou
 */ 
#include "Arduino.h"
#include "Thermistor.h"
float getTemperature(){

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

	adc = analogRead(THERMISTORPIN);
	// we convert adc to temperature with the function:
	average = (adc / 25)-10;
	// we use the look up table
	temperature= (int) lookUpTable[average];
	return temperature;
}
int getVoltage(){
	int adc2 = analogRead(THERMISTORPIN);
	return adc2;
}