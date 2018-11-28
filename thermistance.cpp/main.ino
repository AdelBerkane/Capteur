#include "Arduino.h"
#include "dht.h"
#include "thermistance.h"


void setup() {
Serial.begin(9600);
}

void loop() {
  mydht.temperature();
  mydht.humidity();
  delay.500;

}
