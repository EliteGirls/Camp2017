int red=13;
int green=12;
int yellow=11;
int buttonpin=7;
int buttonvalue;
void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  
    while(digitalRead(buttonpin)==1){
      Serial.println(digitalRead(buttonpin));
    digitalWrite(red,HIGH);
    delay(1000);
    digitalWrite(red,LOW);
    delay(1000);
    digitalWrite(yellow,HIGH);
    delay(1000);
    digitalWrite(yellow,LOW);
    delay(1000);
    digitalWrite (green,HIGH);
    delay(1000);
    digitalWrite (green,LOW);
    delay(1000);
  }
}
  
    
  // put your main code here, to run repeatedly:


