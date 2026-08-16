#define motor_pin 6

void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(motor_pin, 80);
}
