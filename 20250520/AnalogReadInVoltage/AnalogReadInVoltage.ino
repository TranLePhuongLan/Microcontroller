/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/

int led1 = 7;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  
  int sensorValue = analogRead(A0);
  
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 3.3V):
  // https://store.arduino.cc/products/arduino-due?srsltid=AfmBOorjWUPvhzC2HJqAIF4strsw3QKmysB65aVJLtt97TjPuMVfN3QW
  // By default the resolution is set to be 10 bit (2^10 = 1024 levels), even though the pin supports up to 12 bit resolution.
  // The analog input resolution can be changed with `analogReadResolution()`
  // According to Arduino Due, the analog input can only withstand only 3.3 V max inpt
  
  // print out the value you read:
  // float voltage = sensorValue * (3.3 / 1023.0);
  Serial.println(sensorValue);

  // Write to the Digital pin
  digitalWrite(led1, HIGH);

  // IMPORTANT:

  // When multiple tasks are running 'delay' passes control to

  // other tasks while waiting and guarantees they get executed.
  

  delay(10000); // delay for 10 second (This value output from Led1 (PWM pin 7) can not be read in into the analog input pin)

  // However if we use a digital multimeter, we see that the output voltage of PWM pin 7 is only 3.3 V as specified in:
  //  https://store.arduino.cc/products/arduino-due?srsltid=AfmBOorjWUPvhzC2HJqAIF4strsw3QKmysB65aVJLtt97TjPuMVfN3QW
  //      "Digital I/O: pins from 0 to 53... They operate at 3.3 volts"

  digitalWrite(led1, LOW);

  delay(10000); // delay for 10 second
}
