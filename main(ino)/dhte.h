#ifndef dhte_h
#define dhte_h


#include "Arduino.h"
#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>






extern float hum;
extern float temp;

class DHTe
{
  public:
    DHTe();
    DHTe* mydht;
    void temperature();
    void humidity();
};



#endif
