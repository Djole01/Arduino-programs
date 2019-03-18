/*
 * Math.cpp
 *
 * Created: 14/11/2018 14:50:50
 *  Author: Dorde Obradovic
			George Zhou
	Description: Math file for checking the voltage and check bit function

 */ 
#include "Math.h"


int checkBit(int a){
	
	if (a & 1)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}
