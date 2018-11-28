#include <DHT.h>
#include <DHT_U.h>


#define DHTPIN 2  // pin à laquelle on connecte le capteur
#define DHTTYPE DHT22 // modèle DHT 22 (AM2302)
DHT dht(DHTPIN, DHTTYPE);

float hum;
float ti;
DHTe(){
  dht.begin();
}
DHTe::temperature{
  temp = dht.readTemperature();
  Serial.print(temp);
  
}

DHTe::humidity{
    hum = dht.readHumidity();
    Serial.print(hump);
}
