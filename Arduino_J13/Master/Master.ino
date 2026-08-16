#include <Wire.h>

void setup() {
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(8);
  Wire.write("Hello");  
  Wire.endTransmission();
  delay(1000);
}