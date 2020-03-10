#include <Servo.h>  
#include <LiquidCrystal.h>

int servoPin = 9;
 
Servo servo;  
 
int servoAngle = 0;   // servo position in degrees

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//leds
int red=6;
int green=8;
int yellow=7;

 
void setup()
{
  pinMode (red,OUTPUT);
  pinMode (green,OUTPUT);
  pinMode (yellow,OUTPUT);
  Serial.begin(9600);  
  servo.attach(servoPin);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  
}
 
 
void loop()
{
  // reads water level
  int value = analogRead(A0);

  // Turn off the display:
  lcd.noDisplay();
  delay(500);

  // Turn on the display:
  lcd.display();
  delay(500);
  
//control the servo's speed  
//if you change the delay value (from example change 50 to 10), the speed of the servo changes

if (value > 290){
  lcd.print("Heavy rain!");
  digitalWrite (red,HIGH);
  digitalWrite (yellow,LOW);
  digitalWrite (green,LOW);

  for(servoAngle = 0; servoAngle < 180; servoAngle++)  //move the micro servo from 0 degrees to 180 degrees
  {                                  
    servo.write(servoAngle);              
    delay(5);                  
  }
  for(servoAngle = 180; servoAngle > 0; servoAngle--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo.write(servoAngle);          
    delay(5);      
  }
  lcd.clear();
  }
  
else if ((value > 200) && (value <= 290)) {
 lcd.print("AVERAGE Rain.");
 digitalWrite (yellow,HIGH);
 digitalWrite (red,LOW);
 digitalWrite (green,LOW);
 for(servoAngle = 0; servoAngle < 180; servoAngle++)  //move the micro servo from 0 degrees to 180 degrees
  {                                  
    servo.write(servoAngle);              
    delay(10);                  
  }
  for(servoAngle = 180; servoAngle > 0; servoAngle--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo.write(servoAngle);          
    delay(10);      
  }
   lcd.clear();
}
  
else {
 lcd.print("Dry weather!");
 digitalWrite (green,HIGH);
 digitalWrite (yellow,LOW);
 digitalWrite (red,LOW);
 delay(3000);
 lcd.clear();
 }
//end control the servo's speed  

Serial.print(value);
}
