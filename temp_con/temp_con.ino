
#include "DHT.h"
#define DHTTYPE DHT11
#define DHTPIN D5

DHT dht(5,DHTTYPE);

void setup(){
  dht.begin();
  Serial.begin(115200);
  pinMode(DHTPIN, OUTPUT);
  Serial.println('Humidity and Temperature\n\n');
  delay(1000);
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
  if(t <= 30){
      digitalWrite(DHTPIN, HIGH);  
      delay(1000);                     
      digitalWrite(DHTPIN, LOW);  
      delay(1000);
  }
}

