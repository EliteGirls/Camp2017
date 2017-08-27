int potentiometer=A0;
int ledGreen=13;
int ledWhite=12;
int ledYellow=11;
int ledRed=9;
int ledBlue=7;

void setup() {
  // put your setup code here, to run once:
pinMode(potentiometer, INPUT);
pinMode(ledGreen, OUTPUT);
pinMode(ledWhite, OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledRed, OUTPUT);
pinMode(ledBlue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue= analogRead(potentiometer);
  if((potValue>0)&& (potValue<=120)){  
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledWhite,LOW);
    digitalWrite(ledYellow,LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue,LOW); 
    }
  if((potValue>121)&&(potValue<=360)){ 
 
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue,LOW); 
  
    }
  if((potValue>361)&&(potValue<=580)){
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledYellow,HIGH); 
    digitalWrite(ledWhite,HIGH); 
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue,LOW); 
  
    }
  if((potValue>581)&&(potValue<=965)){
 
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledYellow,HIGH); 
    digitalWrite(ledWhite,HIGH); 
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue,LOW); 
  
    }
 if((potValue>966)&&(potValue<=1023)){
   digitalWrite(ledBlue,HIGH);
   digitalWrite(ledYellow,HIGH); 
   digitalWrite(ledWhite,HIGH); 
   digitalWrite(ledRed, HIGH);
   digitalWrite(ledGreen,HIGH); 
  
  
   }
  



}
