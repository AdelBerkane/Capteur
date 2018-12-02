#include "Arduino.h"
#include "thermistance.h"

 float analogPin = 0;
 float val;
 float Rt;
 float R = 10000;
 float T;
 float T1;

Thermistance::Thermistance(){
  
}
void Thermistance::tretrieve() {
val = analogRead(analogPin);
  val = val * (5.0 / 1023);
  Rt = val * R / (5.0 - val);
  T = 1 / (0.00109613 + 0.000240164 * log(Rt) + 0.0000000587433 * log(Rt) * log(Rt) * log(Rt));
  T1 = T - 273.15;
  Serial.println(T1);
}
