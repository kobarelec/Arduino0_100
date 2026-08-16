#define led 2

char str;
void setup() {
  Serial.begin(9600);     
}
void loop() {
  if (Serial.available()) {    
   str = Serial.read();                    
  }
  Serial.println(str);
  
  Serial.println(str);
  if(str == "1"){
    digitalWrite(led,HIGH);
  }
  else if(str == "0"){
    digitalWrite(led,LOW);
  }
}

