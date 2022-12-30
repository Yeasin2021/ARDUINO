#include "DHT.h"


#define DHTTYPE DHT11

DHT dht(5,DHTTYPE);

void setup(){
  dht.begin();
  Serial.begin(115200);
  Serial.println('Humidity and Temperature\n\n');
  delay(500);
}

void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Current Humidity = ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("Current Temperature = ");
  Serial.print(t);
  Serial.println(" C ");
  delay(1000);
}
