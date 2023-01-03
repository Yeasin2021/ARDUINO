
// declare led pin in ardunio
    int led_1 = 13;
    int led_2 = 12;
    int led_3 = 11;
    
    void setup() {
      // put your setup code here, to run once:
      pinMode(led_1,OUTPUT);
      pinMode(led_2,OUTPUT);
      pinMode(led_3,OUTPUT);
    }
    
    void loop() {
      // put your main code here, to run repeatedly:
      digitalWrite(led_1,HIGH);
      delay(100);
      digitalWrite(led_1,LOW);
      delay(100);
      digitalWrite(led_2,HIGH);
      delay(100);
      digitalWrite(led_2,LOW);
      delay(100);
      digitalWrite(led_3,HIGH);
      delay(100);
      digitalWrite(led_2,LOW);
      delay(100);
    }
