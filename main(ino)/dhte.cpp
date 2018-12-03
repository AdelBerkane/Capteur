#include "Arduino.h"
#include "dhte.h"
#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>
#define DHTPIN 2  // pin à laquelle on connecte le capteur
#define DHTTYPE DHT22 // modèle DHT 22 (AM2302)
 DHT dht(DHTPIN, DHTTYPE);

 float hum;
 float temp;

DHTe::DHTe(){
    dht.begin();
}
void DHTe::temperature(){
  temp = dht.readTemperature();
  Serial.print(temp);

}

void DHTe::humidity(){
    hum = dht.readHumidity();
    Serial.print(hum);
    
}
