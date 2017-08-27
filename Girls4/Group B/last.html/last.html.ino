int potentiometer=A0;
#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(potentiometer, INPUT);
Serial.begin(9600);
myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
int potValue= analogRead(potentiometer);

int mappedValue= map(potValue,0,1023,0,180);
myservo.write(mappedValue);
}
