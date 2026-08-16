# Read sensor and show in SerialMonitor
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(digitalRead(2));
  delay(100);
  // put your main code here, to run repeatedly:
}
