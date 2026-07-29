#include <SoftwareSerial.h>
SoftwareSerial sim800(2, 3); 

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);

  delay(2000);
  sim800.println("AT+CMGF=1");
  delay(1000);
  sim800.println("AT+CMGS=\"+989121234567\"");
  delay(1000);
  sim800.print("Hello from SIM800L");
  sim800.write(26);
}

void loop() {
  while (sim800.available()) {
    Serial.write(sim800.read());
  }
}
