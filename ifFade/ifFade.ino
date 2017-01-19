int lightValue = 0; // Set value of lightValue to 0
int delta = 1; // Set value of delta to 1

void setup() {
  Serial.begin(9600); // Activates serial connection and sets the baud rate to 9,600
  pinMode (9, OUTPUT); // This is the mode and pin number
}

void loop() {
  lightValue = lightValue + delta; // Tell the values and premises for the statement to be true
  if (lightValue <= 0 || lightValue >= 255) { // If these are true, only then will the light fade in and out
    delta = -delta; // The variable negates the value of delta
  }
  analogWrite(9, lightValue); // Sends integer to pin 9 in analog form
  Serial.println(lightValue); // Sends integer to serial monitor
  delay(10); // Waits for 10 milliseconds
}
