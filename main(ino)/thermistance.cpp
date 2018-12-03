#include "Arduino.h"
#include "thermistance.h"

 float analogPin = 0;
 float val;
 float val1;
 float Rt;
 float R = 10000;
 float T;
 float T1;

Thermistance::Thermistance(){
  
}
void Thermistance::tretrieve() {
  val = analogRead(analogPin);
  val = val * (5.0/1023.0);
  Rt =  (R * val)/(5.0 -  val);
  T =  1/(0.00109613 + (0.00024016 * log(Rt)) + (0.000000058743 * (log(Rt) * log(Rt) * log(Rt))));
  T1 = T - 273.15;
  Serial.print(T1);
}
