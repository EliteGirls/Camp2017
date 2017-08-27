int pushbutton = 7;
int portia=13;
void setup() {
  // put your setup code here, to run once:
    pinMode(pushbutton,INPUT);
    pinMode(portia,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int push=  digitalRead(pushbutton);
 if(push==HIGH){
  digitalWrite(portia,HIGH);
 }
  
 if(push==0){
 digitalWrite(portia,LOW);
 }
}
  
