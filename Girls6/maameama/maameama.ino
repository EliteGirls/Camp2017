int buttonPin=7;
int ledRed=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledRed,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonValue;
buttonValue=digitalRead(buttonPin);
if(buttonValue==1){
  digitalWrite(ledRed,HIGH);
}


if(buttonValue==0){
  digitalWrite(ledRed,LOW);

}
}
