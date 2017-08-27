int ledRed=13;
int ledGreen = 12;


void setup() {
  // put your setup code here, to run once:
pinMode(ledRed,OUTPUT);
pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledRed,HIGH);
digitalWrite(ledGreen,HIGH);
delay(1000);
digitalWrite(ledRed,LOW);
digitalWrite(ledGreen,LOW);
delay(1000);
}
