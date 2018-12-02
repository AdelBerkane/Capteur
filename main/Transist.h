#ifndef Transist_h
#define Transist_h

#include "Arduino.h"



extern float digitalPin = 5;

class Transist
{
  public:
  Transist();
  Transist mytransi;
  void on();
  void off();
};



#endif
