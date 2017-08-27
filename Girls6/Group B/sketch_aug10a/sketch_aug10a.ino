int buttonpressed =LOW;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(7,INPUT);
pinMode(11,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonpressed =digitalRead(7);
Serial.println(buttonpressed);
if(buttonpressed==1){
digitalWrite(13,HIGH);
digitalWrite(11,HIGH);
}
if(buttonpressed==0)
{
digitalWrite(13,LOW);
digitalWrite(11,LOW);
}
}
