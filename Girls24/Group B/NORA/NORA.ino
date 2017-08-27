 int ledWhite=13;
int ledGreen=12;


void setup() {pinMode(7, INPUT);
pinMode(ledWhite, OUTPUT);
pinMode(ledGreen, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  buttonPressed = digitalWrite(7);
  if(buttonPressed==1){
     digitalWrite(ledGreen, HIGH);
digitalWrite(ledWhite, LOW);}
if(buttonPressed==0){
digitalWrite(ledGreen, LOW);
digitalWrite(ledWhite, HIGH);
}
}



