int potentiometer=analogRead(A0);
int greenled =6;
int yellowled =10;
int redled =9;
int green2led =8;
int blueled =4;
void setup() {
  // put your setup code here, to run once:
 
pinMode(potentiometer,INPUT);
pinMode(greenled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(green2led,OUTPUT);
pinMode(blueled,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potvalue=analogRead(potvalue);
Serial.println(potvalue);
if (potvalue >=0, potvalue<=10) {
  digitalWrite(greenled, LOW);
  digitalWrite(yellowled, LOW);
  digitalWrite(redled, LOW);
  digitalWrite(green2led, LOW);
  digitalWrite(blueled, LOW);
}
 if (potvalue >=11 && potvalue<=200) {
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled, LOW);
  digitalWrite(redled, LOW);
  digitalWrite(green2led, LOW);
  digitalWrite(blueled, LOW);
 }
  if (potvalue >=201 && potvalue<=400) {
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled, HIGH);
  digitalWrite(redled, LOW);
  digitalWrite(green2led, LOW);
  digitalWrite(blueled, LOW);
  }
  if (potvalue >=401 && potvalue<=600) {
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled, HIGH);
  digitalWrite(redled, HIGH);
  digitalWrite(green2led, LOW);
  digitalWrite(blueled, LOW);
  }
  if (potvalue >=601 && potvalue<=800) {
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled, HIGH);
  digitalWrite(redled, HIGH);
  digitalWrite(green2led, HIGH);
  digitalWrite(blueled, LOW);
  }
  if (potvalue >=801 && potvalue<=1023) {
  digitalWrite(greenled, HIGH);
  digitalWrite(yellowled, HIGH);
  digitalWrite(redled, HIGH);
  digitalWrite(green2led, HIGH);
  digitalWrite(blueled, HIGH);
}
}
