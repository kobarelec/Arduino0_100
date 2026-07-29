#define sensor A0
float value = 0;
float temp = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(sensor);
  temp = value * (5.0 / 1023.0);
  temp = temp * 100;
  Serial.print("Tempreture : ");
  Serial.print(temp);
  Serial.print("------ ");
  Serial.print("ADC value : ");
  Serial.println(value);
  delay(200);
}
