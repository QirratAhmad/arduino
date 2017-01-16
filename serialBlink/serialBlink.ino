void setup() {
  // put your setup code here, to run once
  Serial.begin(9600); // Activates serial connection and sets the baud rate to 9,600
  Serial.setTimeout (10); // Scans serial buffer every 10 milliseconds
  Serial.println ("How are you?"); // This code makes the words in the parenthesis appear in the serial monitor
  Serial.println("Send 'On' to turn on the LED."); // Gives the user intructions on how to turn the light on
  Serial.println("Send 'Off' to turn off the LED.");// Gives the user instructions on how to turn light off
  :
  pinMode (13, OUTPUT); // This is the mode and pin number
}

void loop() {
  // put your main code here, to run repeatedly
  if (Serial.available() > 0) { // Checks if there is anything in the serial buffer
    String command; // Set 'command' as a string variable
    command = Serial.readString (); // Set 'command' to the contents of the serial buffer
    if (command == "On") { // See if I typed in 'On' in serial monitor
      Serial.println ("OK, turning the light on..."); // Tell the user if the light turned on
      digitalWrite (13, HIGH); // The light turns on
    }
    else if (command == "Off") { // See if I typed in 'Off' in serial monitor
      Serial.println ("OK, turning the light off..."); // Tells the user if the light turned off
      digitalWrite (13, LOW); // The light turns off
    }
  }
}
