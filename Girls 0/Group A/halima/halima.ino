int potentiometer=A0;
#include <Servo.h>
Servo myservo;
void setup() {
    myservo.attach(9);
    myservo.write(180);
  // put your setup code here, to run once:
pinMode (potentiometer,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int potValue=analogRead(potentiometer);
Serial.println(potValue);
int mappedValue=map(potValue,0,1023,0,180);

}
