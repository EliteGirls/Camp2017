int buttonPressed=LOW;
void setup() {
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  
  buttonPressed=digitalRead(7);
  Serial.println(buttonPressed);
  // put your main code here, to run repeatedly:
  if(buttonPressed==1){
digitalWrite(13,HIGH);}
}
