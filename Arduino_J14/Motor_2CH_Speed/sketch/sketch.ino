#define motor_pin1 6
#define motor_pin2 7
#define EN1 9
#define EN2 10
void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin1, OUTPUT);
  pinMode(motor_pin2, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(EN1, 100);
  digitalWrite(motor_pin1, HIGH);
  digitalWrite(motor_pin2, LOW);
  delay(2000);
  analogWrite(EN2, 200);
  digitalWrite(motor_pin1, LOW);
  digitalWrite(motor_pin2, HIGH);
  delay(2000);
}