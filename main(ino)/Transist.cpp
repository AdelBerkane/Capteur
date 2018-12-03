#include "Arduino.h"
#include "Transist.h"


Transist::Transist(){
  pinMode(digitalPin, OUTPUT);

}

void Transist::on(){
digitalWrite(digitalPin, 255);
}
void Transist::off(){
  digitalWrite(digitalPin, 0);
}
