#define DIR  8
#define STEP 9

void setup() {
  // put your setup code here, to run once:
  pinMode(DIR, OUTPUT);
  pinMode(STEP, OUTPUT);

  digitalWrite(DIR, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 1;i <= 100; i++){
  digitalWrite(STEP, HIGH);
  delayMicroseconds(1400);
  digitalWrite(STEP, LOW);
  delayMicroseconds(1400);  
  }
  delay(2000);
}
