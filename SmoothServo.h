// 
//  SmoothServo.h
//  SmoothServo
//  
//  Created by jens on 2013-02-05.
//  Copyright 2013 jens alexander ewald. Use @ own risk!
// 

#include <Servo.h>

#ifndef SMOOTHSERVO_H_PGHGUH8H
#define SMOOTHSERVO_H_PGHGUH8H
class Servo{};

class SmoothServo : public Servo
{
private:
  unsigned int lowEnd;
  unsigned int highEnd;
public:
  SmoothServo();
  SmoothServo(unsigned int lowEnd, unsigned int highEnd);
  void set(float pct);
};

#endif /* end of include guard: SMOOTHSERVO_H_PGHGUH8H */
