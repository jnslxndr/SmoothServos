// 
//  SmoothServo.cpp
//  SmoothServo
//  
//  Created by jens on 2013-02-05.
//  Copyright 2013 jens alexander ewald. Use @ own risk!
// 

#include "SmoothServo.h"

SmoothServo::SmoothServo() : Servo(), lowEnd(1000), highEnd(2000)
{
}

SmoothServo::SmoothServo(unsigned int _lowEnd, unsigned int _highEnd)
  : Servo(), lowEnd(_lowEnd), highEnd(_highEnd)
{
}

SmoothServo::set(float pct) {
  s.writeMicroseconds(lowEnd+(lowEnd-highEnd)*lerp);
  // we must wait a bit to let the servo settle down
  delayMicroseconds(20);
}