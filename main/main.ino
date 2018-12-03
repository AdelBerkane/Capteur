#include "Arduino.h"
#include "dhte.h"
#include "thermistance.h"
#include "Transist.h"



DHTe mydht;
Thermistance mythermi;
Transist mytransi;
boolean change = true;
void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.println("VVVVVVVVVVVVVV");
  Serial.print("Temperature ambiante : ");
  mydht.temperature();
  Serial.println(" C");
  Serial.print("Humidité interne : ");
  mydht.humidity();
  Serial.println(" %");
  Serial.print("Temperature module : ");
  mythermi.tretrieve();
  Serial.println(" C");
  delay(5000);

  if (change == true){
    mytransi.on();
  }
  else if (change == false){
    mytransi.off();
  }
}
