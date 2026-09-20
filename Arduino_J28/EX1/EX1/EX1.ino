#define R1 13
#define R2 12
#define R3 11
#define R4 10

#define C1 9
#define C2 8
#define C3 7
#define C4 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(R1 , OUTPUT);
  pinMode(R2 , OUTPUT);
  pinMode(R3 , OUTPUT);
  pinMode(R4 , OUTPUT);

  pinMode(C1 , INPUT_PULLUP);
  pinMode(C2 , INPUT_PULLUP);
  pinMode(C3 , INPUT_PULLUP);
  pinMode(C4 , INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  if(digitalRead(C1) == 0) Serial.println("1");
  if(digitalRead(C2) == 0) Serial.println("2");
  if(digitalRead(C3) == 0) Serial.println("3");
  if(digitalRead(C4) == 0) Serial.println("A");

  delay(10);

  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

  if(digitalRead(C1) == 0) Serial.println("4");
  if(digitalRead(C2) == 0) Serial.println("5");
  if(digitalRead(C3) == 0) Serial.println("6");
  if(digitalRead(C4) == 0) Serial.println("B");

  delay(10);

  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, LOW);
  digitalWrite(R4, HIGH);

  if(digitalRead(C1) == 0) Serial.println("7");
  if(digitalRead(C2) == 0) Serial.println("8");
  if(digitalRead(C3) == 0) Serial.println("9");
  if(digitalRead(C4) == 0) Serial.println("C");

  delay(10);

  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, LOW);

  if(digitalRead(C1) == 0) Serial.println("*");
  if(digitalRead(C2) == 0) Serial.println("0");
  if(digitalRead(C3) == 0) Serial.println("#");
  if(digitalRead(C4) == 0) Serial.println("D");

  delay(10);

}
