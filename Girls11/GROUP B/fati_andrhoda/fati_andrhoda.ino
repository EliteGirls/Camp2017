#include<Servo.h>
Servo myservo;
int potentiometer=A0;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
pinMode(potentiometer,INPUT);
Serial.begin(9600);
}

void loop() { 
  // put your main code here, to run repeatedly:
int potValue=analogRead(potentiometer);
Serial.println(potValue);
potValue=analogRead(potentiometer);
int mappedValue=map(potValue,0,1023,0,180);
myservo.write(mappedValue);
}
