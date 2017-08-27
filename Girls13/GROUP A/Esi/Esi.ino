int potentiometer=A0;
int ledRed=11;
int ledBlue=7;
int ledWhite=8;
int ledYellow=10;
int ledGreen=9;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(ledRed,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledWhite,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(potentiometer,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int potValue=analogRead(A0);
Serial.println(potValue);
if ((potValue>=0)&&(potValue<170)){
 digitalWrite(ledRed,LOW);
 digitalWrite(ledBlue,LOW);
 digitalWrite(ledWhite,LOW);
 digitalWrite(ledYellow,LOW);
 digitalWrite(ledGreen,LOW);}
if ((potValue>=170)&&(potValue<340)){
 digitalWrite(ledRed,HIGH);
 digitalWrite(ledBlue,LOW);
 digitalWrite(ledWhite,LOW);
 digitalWrite(ledYellow,LOW);
 digitalWrite(ledGreen,LOW);}
 if ((potValue>=340)&&(potValue<510)){
 digitalWrite(ledRed,HIGH);
 digitalWrite(ledBlue,HIGH);
 digitalWrite(ledWhite,LOW);
 digitalWrite(ledYellow,LOW);
 digitalWrite(ledGreen,LOW);}
 if ((potValue>=510)&&(potValue<680)){
 digitalWrite(ledRed,HIGH);
 digitalWrite(ledBlue,HIGH);
 digitalWrite(ledWhite,HIGH);
 digitalWrite(ledYellow,LOW);
 digitalWrite(ledGreen,LOW);}
 if ((potValue>=680)&&(potValue<850)){
 digitalWrite(ledRed,HIGH);
 digitalWrite(ledBlue,HIGH);
 digitalWrite(ledWhite,HIGH);
 digitalWrite(ledYellow,HIGH);
 digitalWrite(ledGreen,LOW);}
 if( (potValue>=850)&&(potValue<=1023)){
 digitalWrite(ledRed,HIGH);
 digitalWrite(ledBlue,HIGH);
 digitalWrite(ledWhite,HIGH);
 digitalWrite(ledYellow,HIGH);
 digitalWrite(ledGreen,HIGH);}
}

