#include "Arduino.h"
#include "Transist.h"


Transist::Transist(){
  pinMode(digitalPin, OUTPUT);

}

void Transist::on(){
digitalWrite(digitalPin, HIGH);
}
void Transist::off(){
  digitalWrite(digitalPin, LOW);
}
