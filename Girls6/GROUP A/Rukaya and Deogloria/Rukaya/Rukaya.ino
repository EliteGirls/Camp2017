 int ledRed=13;
 int ledBlue=12;
 void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledRed,HIGH);
  delay(1000);
  digitalWrite(ledRed,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed,HIGH);
  delay(1000);
  digitalWrite(ledRed,LOW);
  delay(1000);
  digitalWrite(ledBlue,HIGH);
  delay(1000);
  digitalWrite(ledBlue,LOW);
  delay(2000);
}
