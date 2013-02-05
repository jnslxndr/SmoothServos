/*
  Simple example as note to self on how to use
 writeMicroseconds(..); of the Servo Library
 
 This shows a continious sweep from one end
 to the other, as the default example does too.
 
 Using microSeconds the resolution if far more
 than 180°. This way the motion can get much smoother.
 
 Change the start and end values according
 to your servos! They are most likely not always
 the same.
 
 jens alexander ewald, lea.io, 2013
 */

#include "SmoothServo.h"

SmoothServo s(500,2300);

int speed = 10000; // This is in microseconds! Less is faster

void setup(){
  s.attach(5);
  // The LED is only for illustration of the direction
  pinMode(11,OUTPUT);
}

void loop() {
  digitalWrite(11,HIGH);
  for(int i=0; i<=1000; i++) {
    s.set(i/1000.0);
    delayMicroseconds(speed);
  }
  delay(500);
  digitalWrite(11,LOW);
  for(int i=1000; i>=0; i--) {
    s.set(i/1000.0);
    delayMicroseconds(speed);
  }
  delay(500);
}

