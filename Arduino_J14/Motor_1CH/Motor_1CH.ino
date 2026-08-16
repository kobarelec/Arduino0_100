#define motor_pin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor_pin, HIGH);
  delay(2000);
  digitalWrite(motor_pin, LOW);
  delay(2000);
}
