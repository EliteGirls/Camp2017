int buttonPressed= LOW;
void setup() {
  // put your setup code here, to run once:
buttonPressed=digitalRead(7);
pinMode(13, OUTPUT);
pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (buttonPressed==1){
  digitalWrite(13,HIGH);
  if (buttonPressed==0);
  digitalWrite(13,LOW);
}
}
