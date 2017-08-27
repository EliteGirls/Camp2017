int buttonPressed = LOW;
int red=9;
int yellow=5;
int white=6;
int green=3;
void setup() {
  pinMode(7,INPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(white,OUTPUT);
  Serial.begin(9600);
 
  // put your setup code here, to run once:

}

void loop() {
buttonPressed= digitalRead(7); // put your main code here, to run repeatedly:
Serial.println(buttonPressed);

if (buttonPressed==LOW){
  digitalWrite(yellow,HIGH);
  delay(100);
  digitalWrite(yellow,LOW);
  delay(200);
  digitalWrite(green,HIGH);
  delay(100);
  digitalWrite(green,LOW);
  delay(200);
  digitalWrite(white,HIGH);
  delay(100);
  digitalWrite(white,LOW);
  delay(200);

   digitalWrite(white,HIGH);
  delay(100);
  digitalWrite(red,LOW);
  delay(200);
   digitalWrite(red,HIGH);
  
  
  
}
  
 if ( buttonPressed==HIGH);{
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(500);
  digitalWrite(green,HIGH);
  delay(1000);
   digitalWrite(green,LOW);
  delay(500);
  digitalWrite(white,HIGH);
  delay(1000);
  digitalWrite(white,LOW);
  delay(500);
  digitalWrite(red,HIGH);
  
  
 }
  


  
}
