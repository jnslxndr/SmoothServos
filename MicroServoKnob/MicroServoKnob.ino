/*
  Simple example as note to self on how to use
 writeMicroseconds(..); of the Servo Library
 
 Another copy of the default Arduino Servo example
 with an analog sensor (preferably a poti) on pin A0.

 Using microSeconds the resolution if far more
 than 180°. This way the motion can get much smoother.

 Change the start and end values according
 to your servos! They are most likely not always
 the same.
  
 jens alexander ewald, lea.io, 2013
 */


#include <Servo.h>

Servo s;

void microDegree(float lerp) {
  static int start = 500;
  static int end   = 2500;
  s.writeMicroseconds(start+(end-start)*lerp);
  // we must wait a bit to let the servo settle down
  delayMicroseconds(20);
}

void setup(){
  s.attach(5);
}

void loop() {
  microDegree(analogRead(A0)/1023.0);
}

