void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);//The mode is output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);//The light is on
  delay(1000);//The duration is 1 second
  digitalWrite(13, LOW);//The light is off
  delay(2000);//The duration is 2 seconds
  digitalWrite(13, HIGH);//The light is on
  delay(3000);//The duration is 3 seconds
  digitalWrite(13, LOW);//The light is off
  delay(4000);//The duration is 4 seconds
  digitalWrite(13, HIGH);//The light is on
  delay(5000);//The duration s 5 seconds
  digitalWrite(13, LOW);//The light is off
  delay(6000);//The duration is 6 seconds
  digitalWrite(13, HIGH);//The light is on
  delay(4000);//The duration is 4 seconds
  digitalWrite(13, LOW);//The light is off
  delay(5000);//The duration is 5 seconds
  digitalWrite(13, HIGH);//The light is on
  delay(7000);//The duration is 7 seconds
  digitalWrite(13, LOW);//The light is off
  delay(2000);//The duration is 2 seconds
}
