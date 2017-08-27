int Potentiometer=A0;
int ledBlue=11;
int potValue=LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(Potentiometer,INPUT);
  pinMode(ledBlue,OUTPUT);
  Serial.begin(9600);

} 

void loop() {
  // put your main code here, to run repeatedly;
  int mappedValue=map(potValue,0,1023,0,255);
 potValue=analogRead(Potentiometer);
  Serial.println(potValue); 
  analogWrite(ledBlue,mappedValue);


}

