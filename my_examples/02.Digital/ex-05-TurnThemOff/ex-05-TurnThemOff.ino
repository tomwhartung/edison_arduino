/*
 * TurnThemOff: turn off all of the LEDs we are using so they stop blinking
 */
int ledPin13 = 13;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int tenSecsInMs = 10000;
//
// put your setup code here, to run once:
//
void setup() {
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}
//
// put your main code here, to run repeatedly:
//
void loop() {
  digitalWrite(ledPin13, LOW);      // turn LED 13 off
  digitalWrite(ledPin2,  LOW);      // turn LED  2 off
  digitalWrite(ledPin3,  LOW);      // turn LED  3 off
  digitalWrite(ledPin4,  LOW);      // turn LED  4 off
  delay(tenSecsInMs);
}
