#define servo_pin 9
int pulse = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(servo_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int angle = 0; angle<=180; angle++){
    pulse = map(angle, 0, 180, 0, 2000);
    digitalWrite(servo_pin, HIGH);
    delayMicroseconds(pulse); // 1.5ms
    digitalWrite(servo_pin, LOW);
    delayMicroseconds(20000 - pulse);

    delay(20);
  }
}
