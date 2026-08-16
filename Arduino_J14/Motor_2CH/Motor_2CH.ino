#define motor_pin1 6
#define motor_pin2 7
void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin1, OUTPUT);
  pinMode(motor_pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor_pin1, HIGH);
  digitalWrite(motor_pin2, LOW);
  delay(2000);
  digitalWrite(motor_pin1, LOW);
  digitalWrite(motor_pin2, HIGH);
  delay(2000);
}