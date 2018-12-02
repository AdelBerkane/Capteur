#ifndef Transist_h
#define Transist_h

#include "Arduino.h"




class Transist
{
  public:
  Transist();
  Transist* mytransi;
  void on();
  void off();
  float digitalPin = 5;
};



#endif
