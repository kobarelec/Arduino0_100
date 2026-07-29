#define VRX A0
#define VRY A1
#define SW  2

#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

int valx, valy;
bool valsw;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valx = analogRead(VRX);
  valy = analogRead(VRY);
  valsw = digitalRead(SW);

  Serial.println(valx);
  Serial.println(valy);
  Serial.println(valsw);

  if (valx > 530){digitalWrite(LED1, HIGH);}
  else if (valx < 510){digitalWrite(LED2, HIGH);}
  else if (valy > 530){digitalWrite(LED3, HIGH);}
  else if (valy < 510){digitalWrite(LED4, HIGH);}
  else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  delay(100);
}
