/*
 * Blink
 * Turns on an LED on for one second, then off for one second, repeatedly.
 *
 * Most Arduinos have an on-board LED you can control. On the Uno and
 * Leonardo, it is attached to digital pin 13. If you're unsure what
 * pin the on-board LED is connected to on your Arduino model, check
 * the documentation at http://www.arduino.cc
 *
 * This example code is in the public domain.
 *
 * modified 8 May 2014
 * by Scott Fitzgerald
 */

/*
 * Morse Code timing Reference: 
 *   https://en.wikipedia.org/wiki/Morse_code#Representation.2C_timing_and_speeds
 */
int ledPin = 13;
int dotMs = 200;
int dashMs = 3 * dotMs;
int elementGapMs = dotMs;
int letterGapMs  = dashMs;
//
// General Functions
// -----------------
//
// Turn the led on for dot milliseconds, then turn it off
//
void dot() {
  digitalWrite(ledPin, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(dotMs);                   // wait for "dot" number of milliseconds
  digitalWrite(ledPin, LOW);      // turn the LED off by making the voltage LOW
}
//
// Turn the led on for dash milliseconds, then turn it off
//
void dash() {
  digitalWrite(ledPin, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(dashMs);                  // wait for "dash" number of milliseconds
  digitalWrite(ledPin, LOW);      // turn the LED off by making the voltage LOW
}
//
// Functions for specific letters
// ------------------------------
//
void blinkLetterA() {
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dash();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterR() {
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dash();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterD() {
  dash();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterU() {
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dash();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterI() {
  dot();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterN() {
  dash();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dot();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
void blinkLetterO() {
  dash();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dash();
  delay(elementGapMs);   // leave it off for the desired gap between dashes and dots in a letter
  dash();
  delay(letterGapMs);    // leave it off for the desired gap between letters
}
//
// "mainline:" setup and loop functions
// ------------------------------------
//
// the setup function runs once when you press reset or power the board
//
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ledPin, OUTPUT);
  // Serial.begin( 9600 );
}
//
// the loop function runs over and over again forever
// Arduino) in Morse Code is
// A          R              D              U              I         N          O
// dot dash   dot dash dot   dash dot dot   dot dot dash   dot dot   dash dot   dash dash dash
//
void loop() {
  blinkLetterA();
  blinkLetterR();
  blinkLetterD();
  blinkLetterU();
  blinkLetterI();
  blinkLetterN();
  blinkLetterO();
  // Serial.println( "in loop fcn ledPin = " + ledPin );
}

