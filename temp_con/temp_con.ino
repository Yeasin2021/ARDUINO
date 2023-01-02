
#include "DHT.h"              // inckude libery
#define DHTTYPE DHT11         // declare dht11 
#define DHTPIN D5             // declare pin number 1 for data

DHT dht(5,DHTTYPE);           // call dht object 

void setup(){
  dht.begin();
  Serial.begin(115200);       // boudrate declare
  pinMode(DHTPIN, OUTPUT);    
  Serial.println('Humidity and Temperature\n\n');
  delay(1000);
}

void loop()
{
  float h = dht.readHumidity();         // read humidity
  float t = dht.readTemperature();      // read temperature
  Serial.print("Current Humidity = ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("Current Temperature = ");
  Serial.print(t);
  Serial.println(" C ");
  delay(1000);
  if(t <= 30){                        // condition check, when temperature is bellow 30 then the red light is blinking 
      digitalWrite(DHTPIN, HIGH);  
      delay(1000);                     
      digitalWrite(DHTPIN, LOW);  
      delay(1000);
  }
}

