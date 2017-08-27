int buttonpressed = HIGH;//main button
 int buttonPressed = LOW;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//main button
pinMode(13,OUTPUT);//main LED
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (buttonpressed ==1){
  digitalWrite(13,HIGH);//main LED 
 }
{
  if (buttonpressed ==0);
  digitalWrite(13,LOW);
  }
//&&||
//||
if (buttonpressed ==0){
  digitalWrite(13,HIGH);//main LED 
 }
{
  if (buttonpressed ==1);
  digitalWrite(13,LOW);
}
}
