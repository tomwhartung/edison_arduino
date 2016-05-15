/* Blink without Delay

 Turns on and off a light emitting diode (LED) connected to a digital
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.

 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 modified 11 Nov 2013
 by Scott Fitzgerald
 
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */
//
// constants won't change. Used here to set the pin numbers:
//
const int ledPin2 = 2;      // LED on pin 2
const int ledPin3 = 3;      // LED on pin 3
const int ledPin4 = 4;      // LED on pin 4
//
// Variables will change:
//
int ledPin2State = LOW;             // ledState used to set LED 2
int ledPin3State = LOW;             // ledState used to set LED 3
int ledPin4State = LOW;             // ledState used to set LED 4
//
// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
//
unsigned long previousMillis2 = 0;        // will store last time LED 2 was updated
unsigned long previousMillis3 = 0;        // will store last time LED 3 was updated
unsigned long previousMillis4 = 0;        // will store last time LED 4 was updated
//
// constants won't change :
//
const long interval2 = 1000;           // interval at which to blink led 2 (milliseconds)
const long interval3 = 2000;           // interval at which to blink led 3 (milliseconds)
const long interval4 = 4000;           // interval at which to blink led 4 (milliseconds)
/**
 * -----------------------------------------------------------------
 * *** CURRENTLY UNUSED *** SAVING FOR POSSIBLE FUTURE REFERENCE ***
 * -----------------------------------------------------------------
 * Check to see if it's time to blink the LED; that is, if the
 * difference between the current time and last time you blinked
 * the LED is bigger than the interval at which you want to
 * blink the LED.
 * -----------------------------------------------------------------
 * *** CURRENTLY UNUSED *** SAVING FOR POSSIBLE FUTURE REFERENCE ***
 * -----------------------------------------------------------------
 */
void checkLedPin4( long currentMillis ) {
  if( currentMillis - previousMillis4 >= interval4 ) {
    previousMillis4 = currentMillis;       // save the last time you blinked the LED
    //
    // toggle the LED
    //
    if (ledPin4State == LOW) {
      ledPin4State = HIGH;
    } else {
      ledPin4State = LOW;
    }

    digitalWrite(ledPin4, ledPin4State);    // set the LED with the ledState of the variable:
  }
}
/**
 * Setup the pins and output
 */
void setup() {
  // set the digital pins as output:
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  Serial.begin(9600);
}

/**
 * Loop: here is where you'd put code that needs to be running all the time.
 */
void loop() {
  unsigned long currentMillis = millis();
  Serial.println( currentMillis );
  //
  // TODO: break this code into functions
  //   An attempt was to do this with this function, but it doesn't work, and I am unsure why
  //     checkLedPin4( currentMillis );
  //   Not worrying about this now though
  //
  if( currentMillis - previousMillis2 >= interval2 ) {
    previousMillis2 = currentMillis;       // save the last time you blinked the LED
    //
    // toggle the LED
    //
    if (ledPin2State == LOW) {
      ledPin2State = HIGH;
    } else {
      ledPin2State = LOW;
    }
    digitalWrite(ledPin2, ledPin2State);    // set the LED with the ledState of the variable:
  }
  if( currentMillis - previousMillis3 >= interval3 ) {
    previousMillis3 = currentMillis;       // save the last time you blinked the LED
    //
    // toggle the LED
    //
    if (ledPin3State == LOW) {
      ledPin3State = HIGH;
    } else {
      ledPin3State = LOW;
    }
    digitalWrite(ledPin3, ledPin3State);    // set the LED with the ledState of the variable:
  }
  if( currentMillis - previousMillis4 >= interval4 ) {
    previousMillis4 = currentMillis;       // save the last time you blinked the LED
    //
    // toggle the LED
    //
    if (ledPin4State == LOW) {
      ledPin4State = HIGH;
    } else {
      ledPin4State = LOW;
    }
    digitalWrite(ledPin4, ledPin4State);    // set the LED with the ledState of the variable:
  }
}

