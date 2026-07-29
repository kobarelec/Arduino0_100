#include <SoftwareSerial.h>
SoftwareSerial sim800(2, 3); 

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);

  delay(3000);
  sim800.println("ATD+989121234567;");

}

void loop() {
  while (sim800.available()) {
    Serial.write(sim800.read());
  }
}