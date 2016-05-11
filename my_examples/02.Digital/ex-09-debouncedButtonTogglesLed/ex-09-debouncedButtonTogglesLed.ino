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
//
// Variables will change:
//
int currentButtonReading = LOW;  // most recent reading of the pushbutton value
int currentButtonState = LOW;    // the current pushbutton status
int lastButtonState = LOW;       // the previous reading from the input pin
int ledPin4State = LOW;          // variable for saving the led status
//
// These variables are longs because the time, measured in miliseconds,
// quickly becomes a bigger number than can be stored in an int.
//
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers
/**
 * Set up our input and output pins
 */
void setup() {
  pinMode(buttonPin, INPUT);            // initialize the pushbutton pin as an input
  pinMode(ledPin4, OUTPUT);             // initialize the LED pin as an output
  digitalWrite(ledPin4, ledPin4State);  // set initial LED state
  currentButtonState = !currentButtonReading;
  lastButtonState = !currentButtonReading;
}
/**
 * Loop forever, with added debounce logic
 */
void loop() {
  currentButtonReading = digitalRead(buttonPin);    // read the state of the pushbutton value
  //
  // if the button state has changed. reset the debounce time
  //
  if ( currentButtonReading != lastButtonState ) {
    lastDebounceTime = millis();   // reset the debouncing timer
  }
  if ( (millis() - lastDebounceTime) > debounceDelay ) {
    if ( currentButtonReading != currentButtonState ) {
      currentButtonState = currentButtonReading;
      lastButtonState = currentButtonReading;  // save the reading.  Next time through the loop,it'll be the lastButtonState:
      //
      // toggle only if the pushbutton is pressed (currentButtonState is HIGH)
      //
      if ( currentButtonState == HIGH ) {
        if ( ledPin4State == LOW ) {
          ledPin4State = HIGH;          // turn LED on
        } else {
          ledPin4State = LOW;           // turn LED off
        }
        digitalWrite( ledPin4, ledPin4State );    // set LED to desired state
      }
    }
  }
}
