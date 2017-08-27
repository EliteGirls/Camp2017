int Potentiometer=A0;
int ledBlue=8;
int ledGreen=10;
int ledWhite=12;
int ledRed=9;
int ledYellow=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(Potentiometer,OUTPUT);
  pinMode(ledBlue,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledWhite,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potVal=analogRead(Potentiometer);
  Serial.println(potVal);
  if (potVal>=0 && potVal<=10);
  digitalWrite(ledBlue,LOW);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  if (potVal>=11 && potVal<=250);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  if (potVal>=251&& potVal<=600);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledWhite,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
   if (potVal>=601&& potVal<=800);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
   if (potVal>=801&& potVal<=903);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,LOW);
  if (potVal>=904 && potVal<=1023);
  digitalWrite(ledBlue,HIGH);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledWhite,HIGH);
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,HIGH);
}
  
  
