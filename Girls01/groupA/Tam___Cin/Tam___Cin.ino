int Potentiometer=A0;
int ledBlue=11;
int ledRed=7;
int ledYellow=13;
int ledGreen=5;
int ledWhite=12;
 


void setup() {
  // put your setup code here, to run once:
  pinMode(Potentiometer,INPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledWhite,OUTPUT);
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly;
int potVal = analogRead(Potentiometer);
Serial.println(potVal);
if((potVal>=0 )&& (potVal<=10)){
  digitalWrite(11,LOW);
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(5,LOW);
  digitalWrite(12,LOW);
  
  }
if((potVal>10 )&& (potVal<=214)){
   digitalWrite(11,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(5,LOW);
  digitalWrite(12,LOW);
  
}
if((potVal>214 )&& (potVal<=417)){
   digitalWrite(11,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(13,LOW);
   digitalWrite(5,LOW);
   digitalWrite(12,LOW);

}
if((potVal>417 )&& (potVal<=620)){
   digitalWrite(11,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(13,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(12,LOW);
  
}
if((potVal>620 )&& (potVal<=821)){
   digitalWrite(11,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(13,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(12,LOW);
  
}
if((potVal>821 )&& (potVal<=1023)){
   digitalWrite(11,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(13,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(12,HIGH);
  
}
}

