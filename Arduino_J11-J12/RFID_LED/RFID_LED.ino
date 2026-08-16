#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN  10
#define RST_PIN  9
#define LED      8

MFRC522 rfid(SS_PIN, RST_PIN);

byte my_uid_card[4] = {0x6A, 0xBF, 0xAE, 0x1A};

void setup() {
  Serial.begin(9600);

  pinMode(LED, OUTPUT);

  SPI.begin();
  rfid.PCD_Init();
  Serial.println("Put Card");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  bool state = true;
  Serial.print("UID Card: ");
  for (byte i = 0; i < rfid.uid.size; i++) {
    if (rfid.uid.uidByte[i] != my_uid_card[i]){
      state = false;
      break;
    }
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }

  if(state == true){digitalWrite(LED, HIGH);}
  else{digitalWrite(LED, LOW);}

  Serial.println();

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}


