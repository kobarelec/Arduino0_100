#include <DHT.h>

const int sensor_pin = 2;
DHT sensor_dht11(sensor_pin, DHT11);

float Humidity, Temperature;

void setup() {
  Serial.begin(9600);
  sensor_dht11.begin();
}

void loop() {
  Humidity = sensor_dht11.readHumidity();
  Temperature = sensor_dht11.readTemperature();

  Serial.print("Humidity : ");Serial.print(Humidity);
  Serial.print("   Temperature : ");Serial.print(Temperature);
  Serial.println();

  delay(600);
}
