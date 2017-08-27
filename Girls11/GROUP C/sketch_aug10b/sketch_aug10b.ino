int buttonPressed= LOW;
int ledGreen=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPressed=digitalRead(7);
  if(buttonPressed==1){
  digitalWrite(ledGreen, HIGH);
  delay(200);
  digitalWrite(ledGreen, LOW);
  delay(200);
  } if(buttonPressed==0){
  digitalWrite(ledGreen, HIGH);
  delay(1000);
  digitalWrite(ledGreen, LOW);
  delay(1000);
 }
  
    Serial.println(buttonPressed);

}
