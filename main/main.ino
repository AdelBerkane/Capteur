#include "Arduino.h"
#include "dhte.h"
#include "thermistance.h"



DHTe mydht;
Thermistance mythermi;
void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.print("Temperature interne : ");
  mydht.temperature();
  Serial.println(" degrés celsius");
  Serial.print("Humidité interne : ");
  mydht.humidity();
  Serial.println(" %");
  Serial.print("Temperature externe : ");
  mythermi.tretrieve();
  Serial.println(" degrés celsius");
  delay(5000);

}
