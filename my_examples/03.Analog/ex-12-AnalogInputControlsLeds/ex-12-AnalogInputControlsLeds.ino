/*
 *  Analog Input
 * Demonstrates analog input by reading an analog sensor on analog pin 0 and
 * turning on and off light emitting diodes (LEDs) connected to digital pins 3 and 4.
 * The amount of time the LED will be on and off depends on
 * the value obtained by analogRead().
 *
 * The circuit:
 * - Potentiometer attached to analog input 0
 * - LED attached to digital output 3
 *
 * Created by David Cuartielles
 * Modified 30 Aug 2011 By Tom Igoe
 * Modified 17 May 2016 By Tom Hartung
 *
 * This example code is in the public domain.
 * http://www.arduino.cc/en/Tutorial/AnalogInput
 */

int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int ledPin3 = 3;      // the LED on pin 3
int ledPin4 = 4;      // the LED on pin 4

/**
 * declare the ledPins as OUTPUT
 */
void setup() {
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  Serial.begin( 9600 );
}

/**
 * read the value from the sensor:
 * turn the ledPins on and stop the program for <sensorValue> milliseconds:
 * turn the ledPin off and stop the program for for <sensorValue> milliseconds:
 */
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println( sensorValue );
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(sensorValue);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(sensorValue);
}
