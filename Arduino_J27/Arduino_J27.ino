#include <Wire.h>

#define DS1307_ADDRESS 0x68

byte decToBcd(byte val) {
  return (val / 10 * 16) + (val % 10);
}
byte bcdToDec(byte val) {
  return (val / 16 * 10) + (val % 16);
}

void setup() {
  Serial.begin(9600);
  Wire.begin();
  byte second = 0;
  byte minute = 10;
  byte hour   = 17;

  Wire.beginTransmission(DS1307_ADDRESS);
  Wire.write(0x00);
  Wire.write(decToBcd(second));
  Wire.write(decToBcd(minute));
  Wire.write(decToBcd(hour));
  Wire.endTransmission();
}

void loop() {
  Wire.beginTransmission(DS1307_ADDRESS);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.requestFrom(DS1307_ADDRESS, 3);

  byte second = bcdToDec(Wire.read() & 0x7F);
  byte minute = bcdToDec(Wire.read());
  byte hour   = bcdToDec(Wire.read() & 0x3F);

  Serial.print(hour);
  Serial.print(":");
  Serial.print(minute);
  Serial.print(":");
  Serial.println(second);

  delay(1000);
}
