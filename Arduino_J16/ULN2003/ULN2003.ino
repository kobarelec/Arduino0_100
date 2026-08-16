#include <Stepper.h>
Stepper myStepper = Stepper(100, 8, 9, 10, 11);
void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(1);
}
