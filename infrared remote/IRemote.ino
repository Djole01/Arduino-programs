/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 */

#include <IRremote.h>

int RECV_PIN = 11;
int i;
int pinArray[6] = {10,9,8,7,6,5,};
IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  for (i=0;i<6;i++)
  {
  pinMode(pinArray[i], OUTPUT);  
  }
}

void loop() {
  if (irrecv.decode(&results)) {
    long int decCode = results.value;

    Serial.println(results.value, HEX);
    
    // do something
    // button 1: FF30CF 16724175
    // button 2: FF18E7 16718055
    // button 3: FF7A85 16743045
    // button 4: FF10EF 16716015
    // button 5: FF38C7 16726215
    // button 6: FF5AA5 16734885
    
    switch (results.value){
      case 16724175: //when you press the 1 button
        digitalWrite(pinArray[0], HIGH);
        digitalWrite(pinArray[3], HIGH);

        break;   
      case 16716015: //when you press the 4 button
        digitalWrite(pinArray[0], LOW);
        digitalWrite(pinArray[3], LOW);        
        break;
       case 16718055: //when you press the 2 button
        digitalWrite(pinArray[1], HIGH);
        digitalWrite(pinArray[5], HIGH);
        break;           
       case 16726215: //when you press the 5 button
        digitalWrite(pinArray[1], LOW);
        digitalWrite(pinArray[5], LOW);
        break;       
       case 16743045: //when you press the 3 button
        digitalWrite(pinArray[2], HIGH);
        digitalWrite(pinArray[4], HIGH);
        break;       
       case 16734885: //when you press the 6 button
        digitalWrite(pinArray[2], LOW);
        digitalWrite(pinArray[4], LOW);
        break;
    }
    irrecv.resume(); // Receives the next value from the button you press
  }
  delay(10);
}
