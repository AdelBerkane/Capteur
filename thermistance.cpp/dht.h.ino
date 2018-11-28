#ifndef dht.h
#define dht_h

#include "Arduino.h"
#include <DHT.h>
#include <DHT_U.h>


#define DHTPIN 2  // pin à laquelle on connecte le capteur
#define DHTTYPE DHT22 // modèle DHT 22 (AM2302)
DHT dht(DHTPIN, DHTTYPE);

float hum;
float ti;

class DHTe(){
  DHTe::temperature();
  DHTe::humidity();
}
