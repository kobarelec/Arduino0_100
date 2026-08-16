#define LED 13
#define Key 2

unsigned int value = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Key, OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  value = digitalRead(Key);
  if (value == 1){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  
  // put your main code here, to run repeatedly:
}

