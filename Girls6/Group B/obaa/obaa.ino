int potentiometer=A0;
int ledRed=13;
int ledBlue=12;
int ledWhite=11;
int ledYellow=10;
int ledGreen=9;



void setup() {
  // put your setup code here, to run once:
pinMode(potentiometer,INPUT);
pinMode(ledRed,OUTPUT);
pinMode(ledBlue,OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledWhite, OUTPUT);
pinMode(ledGreen, OUTPUT);
}

void loop() {
  int potValue=analogRead(potentiometer);
  potValue=analogRead(potentiometer);
  if((potValue>=0) && (potValue<=120)){
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledBlue,LOW);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledGreen,LOW);}
  if((potValue>=121) && (potValue<=360)){
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledGreen,LOW);}
  if((potValue>361) && (potValue<=580)){
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledGreen,LOW);}
  if((potValue>=581) && (potValue<=965)){
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledGreen,LOW);}
  if((potValue>=966) && (potValue<=1023)){
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledYellow,HIGH);
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledGreen,HIGH);}
  
  // put your main code here, to run repeatedly:

}
