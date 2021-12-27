#include <SoftwareSerial.h>
#include <Wire.h>
#include <Servo.h>

Servo myservo;
SoftwareSerial modul_bt (0,1);
char val;

void setup()
{
  Serial.begin(9600);
  modul_bt.begin(9600);
  myservo.attach(2);
 
}

void loop()
{
  myservo.write(90);
  delay(5000);
  myservo.write(0);
  delay(21600);
 
}
