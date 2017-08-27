int RED=13;
 int buttonPin=7;
 int buttonValue;
 void setup() {
  // put your setup code here, to run once;
  pinMode(RED,OUTPUT);
  pinMode(buttonPin,INPUT);
 
 
 
}
void loop() {
  // put your main code here, to run repeatedly:
   buttonValue=digitalRead(buttonPin);
  
  if(buttonValue==1){
    digitalWrite(RED,HIGH);
    }
  else(buttonValue=0){
   digitalWrite(RED,LOW);
  }
  

}
