int ledRed=13;
//I just created an integer on pin 13 and named it ledRed
int ledBlue=12;

void setup() {
  // put your setup code here, to run once:
pinMode (ledRed, OUTPUT);
//I set the pinmode for the LED as an output
pinMode (ledBlue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (ledRed, HIGH);
digitalWrite (ledBlue, LOW);
delay (500);
//When ledRed is on,ledBlue is off
digitalWrite (ledRed, LOW);
digitalWrite (ledBlue, HIGH);
delay(500);
}
//I will turn on the LED, wait one second, turn it off and wait another second
