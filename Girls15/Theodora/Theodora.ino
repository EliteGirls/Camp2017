
int buttonPin=7;
int ledRed=13;
int ledYellow=12;


void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPressed;
  buttonPressed = digitalRead(buttonPin);
  if (buttonPressed==1);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow,HIGH);
  

}
