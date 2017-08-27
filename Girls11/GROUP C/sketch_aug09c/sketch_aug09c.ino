int redled=11;
int yellowled=12;
int greenled=13;
int buttonPin=7;
void setup() {
  // put your setup code here, to run once:
  pinMode (redled,OUTPUT);
  pinMode (yellowled,OUTPUT);
  pinMode (greenled,OUTPUT);
  pinMode (buttonPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonValue=digitalRead(buttonPin)
  if (buttonValue==1){
    
  }
    
  
di
  gitalWrite(redled,HIGH);
  delay(1000);
   digitalWrite(redled,LOW);
  delay(1000);
  

  digitalWrite(yellowled,HIGH);
  delay(1000);
   digitalWrite(yellowled,LOW);
  delay(1000);
   digitalWrite(greenled,HIGH);
  delay(1000);
  digitalWrite(greenled,LOW);
  delay(1000);
  
  

}
