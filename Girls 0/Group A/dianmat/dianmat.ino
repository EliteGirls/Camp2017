int potentiometer= A0;
int ledRed= 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(potentiometer, INPUT);
  pinMode(ledRed, OUTPUT);
  Serial.begin(9600);
 
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int potVal= analogRead(A0);
  Serial.println(potVal);
  delay(750);
  analogWrite(ledRed, HIGH);
}
