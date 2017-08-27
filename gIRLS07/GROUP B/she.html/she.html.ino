int ledRed=13;
int ledYellow=12;
int ledGreen=11;


void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledRed, HIGH);
digitalWrite(ledYellow, LOW);
digitalWrite(ledGreen, LOW);
delay(1000);
digitalWrite(ledRed, LOW);
digitalWrite(ledYellow, HIGH);
digitalWrite(ledGreen, LOW);
delay(500);
digitalWrite(ledRed, LOW);
digitalWrite(ledYellow, LOW);
digitalWrite(ledGreen, HIGH);
delay(1000);



}
