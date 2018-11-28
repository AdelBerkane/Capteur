#ifndef thermistance_h
#define thermistance_h

#include <Adafruit_Sensor.h>





#include "Arduino.h"

extern float analogPin;
extern float val;
extern float Rt;
extern float R;
extern float T;
extern float T1;


class Thermistance
{
  public:
  Thermistance();
  Thermistance* mythermi;
  void tretrieve();
};



#endif
