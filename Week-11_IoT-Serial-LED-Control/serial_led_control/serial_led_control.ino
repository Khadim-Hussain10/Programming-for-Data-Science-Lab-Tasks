const int ledPin = 13; // The LED is connected to pin 13
char incomingByte;     // This will store the value entered in serial moniter

void setup() {
  pinMode(ledPin, OUTPUT); // Output is set to pin 13
  Serial.begin(9600);      // Start serial communication
  
  digitalWrite(ledPin, LOW); // Ensure LED is OFF at start
  
  Serial.println("System Ready.");
  Serial.println("Type '1' for ON, '0' for OFF.");
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    
    if (incomingByte == '1') {
      digitalWrite(ledPin, HIGH); // Turn LED ON
      Serial.println("LED turned ON");
    } 
    else if (incomingByte == '0') {
      digitalWrite(ledPin, LOW);  // Turn LED OFF
      Serial.println("LED turned OFF");
    }
  }
}