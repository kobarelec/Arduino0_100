#include <Wire.h>
#include <ADXL343_WE.h>

ADXL343_WE My_Sensor(0x53);
xyzFloat values;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  My_Sensor.init();

}

void loop() {
  My_Sensor.getGValues(&values);
  Serial.print("x : ");
  Serial.print(values.x);
  Serial.print("y : ");
  Serial.print(values.y);
  Serial.print("z : ");
  Serial.print(values.z);
  Serial.println();
  delay(100);
}
