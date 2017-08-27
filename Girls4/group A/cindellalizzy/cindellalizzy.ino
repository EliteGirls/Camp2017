
int potentiometer=A0;
int led1=11;

void setup() {
  // put your setup code here, to run once:
pinMode(potentiometer,INPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int potValue=analogRead(potentiometer);
Serial.println(potValue);
delay(750);
int mappedValue=map(potValue,0,1023,0,255);
analogWrite(11, mappedValue);

}
\
