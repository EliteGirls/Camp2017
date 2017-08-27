int buttonpressed = LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonpressed = digitalRead(7);
Serial.println(buttonpressed);
if (buttonpressed ==1){
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}

if (buttonpressed ==0){
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
}
}
