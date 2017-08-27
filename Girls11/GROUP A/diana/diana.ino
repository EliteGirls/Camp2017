int potentiometer=A0;
int REDLED=11;

void setup() {
pinMode(potentiometer,INPUT); 
pinMode(REDLED,OUTPUT);
Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int potValue=analogRead(potentiometer);
  Serial.println(potValue);
 int mappedValue=map(potValue,0,1023,0,255);
 analogWrite(REDLED,mappedValue);
  // put your main code here, to run repeatedly:

}
