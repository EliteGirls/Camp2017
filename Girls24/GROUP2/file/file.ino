int leadPin =13;
int leadBlue =12;
void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(leadPin, OUTPUT);
  pinMode (leadBlue, OUTPUT);
}

void loop() 
  // put your main code here, to run repeatedly
  {
  (buttonPressed == 1)}{
    digitalWrite(leadPin, HIGH);
    digitalWrite(leadBlue,LOW );
  }
  if (buttonPressed == 0){
    digitalWrite(leadPin, LOW);
    digitalWrite(leadBlue, HIGH);
  }
