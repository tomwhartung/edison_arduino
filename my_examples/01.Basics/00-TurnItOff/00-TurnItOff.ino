/*
 * TurnItOff: turn off LED so it stops blinking
 */
int ledPin = 13;
int tenSecsInMs = 10000;
//
// put your setup code here, to run once:
//
void setup() {
  pinMode(ledPin, OUTPUT);

}
//
// put your main code here, to run repeatedly:
//
void loop() {
  digitalWrite(ledPin, LOW);      // turn the LED off by making the voltage LOW
  delay(tenSecsInMs);
}
