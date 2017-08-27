
int ledRed=11;
int ledYellow=12;
int ledGreen=13;
void setup() {
  // put your setup code here, to run o
pinMode(ledRed,OUTPUT);
pinMode(ledYellow,OUTPUT);
pinMode(ledGreen,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledRed,HIGH);
digitalWrite(ledYellow,LOW);
digitalWrite(ledGreen,LOW);
delay(200);
digitalWrite(ledGreen,HIGH);
digitalWrite(ledYellow,LOW);
digitalWrite(ledRed,LOW);
delay(200);
digitalWrite(ledYellow,HIGH);
digitalWrite(ledGreen,LOW);
digitalWrite(ledRed,LOW);
delay(200);







}
