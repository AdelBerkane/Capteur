#include "Arduino.h"


float digitalPin = 5;

Transist::Transist(){
  pinMode(digitalPin, OUTPUT);

}

Transist::on(){
digitalWrite(digitalPin, HIGH);
}
Transist::off(){
  digitalWrite(digitalPin, LOW);
}
