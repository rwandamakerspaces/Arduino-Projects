// C++ code
//
const int redPin = 11;
const int yellowPin = 12;
const int greenPin = 13;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}


void loop() {
  digitalWrite(redPin, HIGH);     // Turn on red LED
  delay(3000);                    // Wait for 3 seconds
  digitalWrite(redPin, LOW);      // Turn off red LED
  digitalWrite(yellowPin, HIGH);  // Turn on yellow LED
  delay(1000);                    // Wait for 1 second
  digitalWrite(yellowPin, LOW);   // Turn off yellow LED
  digitalWrite(greenPin, HIGH);   // Turn on green LED
  delay(5000);                    // Wait for 5 seconds
  digitalWrite(greenPin, LOW);    // Turn off green LED
  digitalWrite(yellowPin, HIGH);    // Turn on yellow LED
  delay(1000); 
  digitalWrite(yellowPin, LOW);  
}
