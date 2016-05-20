/*
 *  Pulse Width Modulation (PWM)
 * Demonstrates using PWM to control an LED connected to digital pin 3
 * Note that this program works only when the LED is on one of the pins
 * that supports PWM  Following is a list of these pins:
 *   PWM-compatible pins: 3, 5, 8, 9, 10, and 11
 *
 * The circuit:
 * - LED attached to digital output 3
 *
 * Original code from the book:
 *   Make: Getting started with Arduino
 * Modified 17 May 2016 By Tom Hartung
 *
 * This example code is in the public domain.
 * http://www.arduino.cc/en/Tutorial/AnalogInput
 */

const int ledPin3 = 3;   // the LED on pin 3 (should also work on pins 5 or 8-11)

/**
 * declare the ledPins as OUTPUT
 */
void setup() {
  pinMode(ledPin3, OUTPUT);
  Serial.begin( 9600 );
}

/**
 * increase then decrease the brightness of the LED in a predictable and hard-coded manner
 * ensures that:
 * o the min and max brightness levels range from 0 to 255 inclusive and
 * o the minBrightness < maxBrightness
 */
void cycleLedBrightness( int minBrightness, int maxBrightness, int delayMs ) {
  int brightness = 0;
  if ( minBrightness < 0 ) {
    minBrightness = 0;
  }
  if ( maxBrightness > 255 ) {
    maxBrightness = 255;
  }
  if ( maxBrightness < minBrightness ) {
    int tmpMinBrightness = minBrightness;
    minBrightness = maxBrightness;
    maxBrightness = tmpMinBrightness;
  }
  for ( brightness = minBrightness; brightness < maxBrightness; brightness++ ) {
    analogWrite( ledPin3, brightness );
    delay( delayMs );
    Serial.println( brightness );
  }
  for ( brightness = maxBrightness; brightness > minBrightness; brightness-- ) {
    analogWrite( ledPin3, brightness );
    delay( delayMs );
    Serial.println( brightness );
  }
}
/**
 * call a function to increase then decrease the brightness of the LED in a more flexible manner
 */
void loop() {
  int delayMs;
  for ( delayMs = 1; delayMs < 50; delayMs++ ) {
    cycleLedBrightness( 0, 255, delayMs );
  }
}
