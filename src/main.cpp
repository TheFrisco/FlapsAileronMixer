// Roberts First Arduino ... Not Quite "Hello World!" LOL
#include <Arduino.h>

int led = 12;
int onDelay = 200;
int offDelay = 200;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(onDelay);           // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  delay(offDelay);          // wait for a second
}