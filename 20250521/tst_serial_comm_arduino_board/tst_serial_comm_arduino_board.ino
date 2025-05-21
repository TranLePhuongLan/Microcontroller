void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
  Serial.println("Type something:");
}

void loop() {
  if (Serial.available() > 0) {       // Check if data is available to read
    String input = Serial.readString(); // Read the incoming data as a string
    Serial.print("You typed: ");
    Serial.println(input);             // Send it back to the Serial Monitor
  }
}