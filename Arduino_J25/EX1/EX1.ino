#include <SoftwareSerial.h>

SoftwareSerial sim800(2, 3); 

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);

  delay(2000);

  sim800.println("AT");
  //sim800.println("AT+CSQ");
  
}

void loop() {
  while (sim800.available()) {
    Serial.write(sim800.read());
  }
}