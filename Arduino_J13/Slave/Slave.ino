#include <Wire.h>

void setup() {
  Wire.begin(8); 
  Wire.onReceive(receive_data);
  Serial.begin(9600);
}

void loop() {
  delay(100);
}

void receive_data() {
  while (Wire.available()) {
    char my_data = Wire.read();
    Serial.println(my_data);
  }
}
