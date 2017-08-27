#include<Servo.h>
int potentiometer=A0;
Servo myservo;
void setup() {
  myservo.attach(9);
  myservo.write(180);
  pinMode(potentiometer,INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}           

void loop() {
  int potVal=analogRead(potentiometer);
  potVal=analogRead(potentiometer);
  Serial.println(potVal);
  int mappedValue=map (potVal,0,1023,0,180);
 myservo.write(mappedValue);
  // put your main code here, to run repeatedly:

}
     
