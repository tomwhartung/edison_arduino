/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
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
