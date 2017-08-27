int potentiometer= A0;
int ledYellow= 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(potentiometer, INPUT);
  pinMode(ledYellow, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potVal= analogRead(potentiometer);
  Serial.println(potVal);
  int mappedValue = map(potVal,0,1023,0,255);
  analogWrite(ledYellow,mappedValue);
  
  
}
