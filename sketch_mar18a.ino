// Define the pins
const int pumpPin = 9;   // the pin connected to the water pump

void setup() {
  // Initialize the pump pin as an output
  pinMode(pumpPin, OUTPUT);
}

void loop() {
  // Turn on the pump for 5 seconds
  digitalWrite(pumpPin, HIGH);
  delay(5000);
  
  // Turn off the pump for 5 seconds
  digitalWrite(pumpPin, LOW);
  delay(5000);
}
