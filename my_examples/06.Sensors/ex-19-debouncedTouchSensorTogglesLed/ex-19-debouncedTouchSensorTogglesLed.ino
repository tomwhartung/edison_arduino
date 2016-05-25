/*
 * Touch sensor turns on and off a light emitting diode(LED) connected to digital
 * pin 2, when pressing a touch sensor attached to pin 7.
 *
 * The circuit:
 * - touch sensor attached on pin 7
 * - LED attached on pin 2
 *
 * created 2005 by DojoDave <http://www.0j0.org>
 * modified 30 Aug 2011 by Tom Igoe
 * modified 16 May 2016 by Tom Hartung
 *
 * This example code is in the public domain.
 * http://www.arduino.cc/en/Tutorial/Button
 */
//
// constants won't change. They're used here to set pin numbers:
//
const int sensorPin = 7;     // Touch Sensor pin number
const int ledPin2   = 2;     // LED pin number
//
// Variables will change:
//
int currentSensorReading = LOW;  // most recent reading of the touch sensor value
int lastSensorReading = LOW;     // the previous reading from the input pin
int savedSensorState = LOW;      // the current touch sensor status
int ledPin2State = HIGH;         // variable for saving the led status
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
  pinMode(sensorPin, INPUT);            // initialize the touch sensor pin as an input
  pinMode(ledPin2, OUTPUT);             // initialize the LED pin as an output
  digitalWrite(ledPin2, ledPin2State);  // set initial LED state
}
/**
 * Loop forever, with added debounce logic
 */
void loop() {
  currentSensorReading = digitalRead(sensorPin);    // read the state of the touch sensor value
  //
  // if the sensor state has changed. reset the debounce time
  //
  if ( currentSensorReading != lastSensorReading ) {
    lastDebounceTime = millis();   // reset the debouncing timer
  }
  if ( (millis() - lastDebounceTime) > debounceDelay ) {
    if ( currentSensorReading != savedSensorState ) {
      savedSensorState = currentSensorReading;
      //
      // toggle only if the touch sensor is pressed (savedSensorState is HIGH)
      //
      if ( savedSensorState == HIGH ) {
        if ( ledPin2State == LOW ) {
          ledPin2State = HIGH;          // turn LED on
        } else {
          ledPin2State = LOW;           // turn LED off
        }
      }
    }
  }
  digitalWrite( ledPin2, ledPin2State );    // set LED to desired state
  lastSensorReading = currentSensorReading;  // save the reading.  Next time through the loop,it'll be the lastSensorReading:
}
