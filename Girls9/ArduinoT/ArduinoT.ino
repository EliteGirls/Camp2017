  int ledGreen=13;
  int ledYellow=12;

void setup() {
  pinMode(ledGreen,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledGreen,HIGH);
  delay(3000);
  digitalWrite(ledGreen,LOW);
  delay(1000);
  digitalWrite(ledYellow,HIGH);
  delay(4000);
  digitalWrite(ledYellow,LOW);
  delay(100)R
  
  
  // put your main code here, to run repeatedly:

}
