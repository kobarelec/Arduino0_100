char number = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0){
    number = Serial.read();

    Serial.print("Your number is : ");
    Serial.println(number);

  }
  // put your main code here, to run repeatedly:

}
