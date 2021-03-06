/*
 * Touch Sensor turns on and off a light emitting diode(LED) connected to digital
 * pin 4, when pressing a pushbutton attached to pin 7.
 *
 * The circuit:
 * - Touch Sensor attached to pin 7
 * - LED attached on pin 4
 *
 * created 2005 by DojoDave <http://www.0j0.org>
 * modified 30 Aug 2011 by Tom Igoe
 * modified 16 May 2016 by Tom Hartung
 *
 * This example code is in the public domain.
 * http://www.arduino.cc/en/Tutorial/Button
 */
//
// set pin numbers:
//
const int buttonPin = 7;     // pushbutton pin number
const int ledPin4   = 4;     // LED pin number

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin4, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin4, HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin4, LOW);
  }
}
