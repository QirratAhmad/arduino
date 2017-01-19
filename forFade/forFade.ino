void setup() {
  pinMode (9, OUTPUT); // This is the pin number and mode
  Serial.begin(9600); // Activates serial connection and sets the baud rate to 9,600
}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // This is the initialization, test, and increment/decrement
    analogWrite(9, lightValue); // This is the pin and value
    Serial.println(lightValue); // Set output lightValue to LED
    delay(10); // The duration is 10 milliseconds
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // This is the initialization, test, and increment/decrement
    analogWrite(9, lightValue); // Sends integer to pin 9 in analog form
    Serial.println(lightValue); // Sends integer to serial monitor
    delay(10); // Waits for 10 milliseconds
  }
}
