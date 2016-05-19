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
const int delayMs = 3;    // ms to delay before incrementing or decrementing brightness
int brightness = 0;      // brightness level (ranges from 0 to 255 inclusive)

/**
 * declare the ledPins as OUTPUT
 */
void setup() {
  pinMode(ledPin3, OUTPUT);
  Serial.begin( 9600 );
}

/**
 * increase then decrease the brightness of the LED in a predictable and hard-coded manner
 */
void loop() {
  for ( brightness = 0; brightness < 255; brightness++ ) {
    analogWrite( ledPin3, brightness );
    delay( delayMs );
    Serial.println( brightness );
  }
  for ( brightness = 255; brightness > 0; brightness-- ) {
    analogWrite( ledPin3, brightness );
    delay( delayMs );
    Serial.println( brightness );
  }
}
