/*
 * Button Turns on and off a light emitting diode(LED) connected to digital
 * pin 4, when pressing a pushbutton attached to pin 8.
 *
 * The circuit:
 *   Touch Sensor attached to pin 7
 *   LED attached on digital pin 2
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
const int buttonPin = 7;     // touch sensor pin number
const int ledPin2   = 2;     // LED pin number

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ledPin2State = LOW;      // variable for saving the led status

void setup() {
  pinMode(buttonPin, INPUT);   // initialize the pushbutton pin as an input
  pinMode(ledPin2, OUTPUT);    // initialize the LED pin as an output
}

void loop() {
  buttonState = digitalRead(buttonPin);    // read the state of the pushbutton value
  //
  // check if the pushbutton is pressed (buttonState is HIGH)
  //
  if ( buttonState == HIGH ) {      // toggle the LED:
    if ( ledPin2State == LOW ) {
      ledPin2State = HIGH;          // turn LED on
    } else {
      ledPin2State = LOW;           // turn LED off
    }
    digitalWrite( ledPin2, ledPin2State );    // set LED to desired state
  }
}
