/*
 * Button Turns on and off a light emitting diode(LED) connected to digital
 * pin 4, when pressing a pushbutton attached to pin 8.
 *
 * The circuit:
 *   Pushbutton attached to pin 8
 *   LED attached on digital pin 4
 *
 * created 2005 by DojoDave <http://www.0j0.org>
 * modified 30 Aug 2011 by Tom Igoe
 * modified 15 May 2016 by Tom Hartung
 *
 * This example code is in the public domain.
 * http://www.arduino.cc/en/Tutorial/Button
 */
//
// constants won't change. They're used here to set pin numbers:
//
const int buttonPin = 8;     // the number of the pushbutton pin
const int ledPin4   = 4;     // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ledPin4State = LOW;      // variable for saving the led status

void setup() {
  pinMode(buttonPin, INPUT);   // initialize the pushbutton pin as an input
  pinMode(ledPin4, OUTPUT);    // initialize the LED pin as an output
}

void loop() {
  buttonState = digitalRead(buttonPin);    // read the state of the pushbutton value
  //
  // check if the pushbutton is pressed (buttonState is HIGH)
  //
  if ( buttonState == HIGH ) {      // toggle the LED:
    if ( ledPin4State == LOW ) {
      ledPin4State = HIGH;          // turn LED on
    } else {
      ledPin4State = LOW;           // turn LED off
    }
    digitalWrite( ledPin4, ledPin4State );    // set LED to desired state
  }
}
