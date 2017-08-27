int ledRed= 13; 
int ledBlue= 11;
void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledBlue, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed, LOW);
  delay(1000);
  digitalWrite(ledBlue, HIGH);
  delay(1000);
  digitalWrite(ledRed, HIGH);
  delay(1000);
  digitalWrite(ledBlue, LOW);
  delay(1000);
}
