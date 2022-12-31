


#define DHTPIN D5
void setup() {
  // put your setup code here, to run once:
  pinMode(DHTPIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(DHTPIN, HIGH);  
  delay(1000);                     
  digitalWrite(DHTPIN, LOW);  
  delay(1000);                      

}