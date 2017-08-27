int ledRed=13;
int buttonPin=7;
void setup(){
  pinMode(ledRed,OUTPUT);
  pinMode(buttonPin,INPUT);
}
void loop setup(){
  intbuttonValue;
  buttonValue=digitalRead(buttonPin);
  if(buttonValue==1);{
    digitalWrite(ledRed,HIGH);
  }
  if (buttonValue==0);{
    digitalWrite(ledRed,LOW);
  }
 }
 

  

