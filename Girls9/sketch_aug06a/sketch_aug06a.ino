int ledRed=13
int ledYellow=12
int ledGreen=8

void setup() 
  // put your setup code here, to run once:{
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  }



void loop() 
  // put your main code here, to run repeatedly:{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  delay(5000);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(3000);
}
