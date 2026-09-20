const uint8_t rowPins[4] = {13, 12, 11, 10};
const uint8_t colPins[4] = {9, 8, 7, 6};

const char keys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (uint8_t i = 0; i < 4; i++) {
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], HIGH);
    pinMode(colPins[i], INPUT_PULLUP);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for (uint8_t r = 0; r < 4; r++) {
    digitalWrite(rowPins[r], LOW);

    for (uint8_t c = 0; c < 4; c++) {
      if (digitalRead(colPins[c]) == LOW) {
        delay(20); 
        if (digitalRead(colPins[c]) == LOW) {
          Serial.println(keys[r][c]);
          while (digitalRead(colPins[c]) == LOW); 
        }
      }
    }

    digitalWrite(rowPins[r], HIGH);
  }

}
