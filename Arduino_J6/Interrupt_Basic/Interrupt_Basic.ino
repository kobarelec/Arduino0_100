#define LED 13
#define Key 2

unsigned int value = 0;
unsigned int state_pin = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Key, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(Key), blink, FALLING);

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED, state_pin);
  // put your main code here, to run repeatedly:
}

void blink(){
  state_pin = !state_pin;
}

