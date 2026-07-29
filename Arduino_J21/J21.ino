#include <OneWire.h>
#include <DallasTemperature.h>

#define sensor_ds 5
float temp = 0;
OneWire onewire(sensor_ds);
DallasTemperature sensor(&onewire);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.requestTemperatures();
  temp = sensor.getTempCByIndex(0);

  Serial.print("Your Temperatur is : ");
  Serial.println(temp);

}
