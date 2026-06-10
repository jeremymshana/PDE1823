const int ledPin = 13;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {   // Button pressed
    digitalWrite(ledPin, HIGH); // Turn LED ON

    delay(3000);               // Keep LED ON for 3 seconds

    digitalWrite(ledPin, LOW); // Turn LED OFF
  }
}