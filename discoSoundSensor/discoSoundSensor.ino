int soundSensor = 2;
int GREEN = 2;
int YELLOW = 3;
int RED = 4;
void setup() 
{
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  pinMode (soundSensor, INPUT);
  pinMode (GREEN, OUTPUT);
  pinMode (RED, OUTPUT);
  pinMode (YELLOW, OUTPUT);

}

void loop()
{
  int val;
  val=analogRead(0);   //connect mic sensor to Analog 0
  Serial.println(val,DEC);//print the sound value to serial
  if (val == 351)
  {
    digitalWrite(GREEN,HIGH);
  }
  else if (val == 352)
  {
    digitalWrite(YELLOW,HIGH);
  }
  else if (val == 353)
  {
    digitalWrite(RED,HIGH);
  }
  else {
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
    }
  delay(100);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  delay(50);

}
