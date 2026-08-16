#define LED1 13
#define LED2 12
#define KEY  11

unsigned long Current_Time = 0;
unsigned long Privious_Time = 0;

int My_Time = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(KEY, INPUT);
}

void loop() {
  Current_Time = millis();

  if(Current_Time - Privious_Time >= My_Time){
    Privious_Time = Current_Time;
    digitalWrite(LED1, !digitalRead(LED1));
  }

  if(digitalRead(KEY) == 1){
    digitalWrite(LED2, HIGH);
  }else{
    digitalWrite(LED2, LOW);
  }
}
