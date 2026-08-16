#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("Put Card");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  Serial.print("UID: ");
  Serial.print(rfid.uid.uidByte[0], HEX); Serial.print(" ");
  Serial.print(rfid.uid.uidByte[1], HEX); Serial.print(" ");
  Serial.print(rfid.uid.uidByte[2], HEX); Serial.print(" ");
  Serial.print(rfid.uid.uidByte[3], HEX); Serial.println();

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
