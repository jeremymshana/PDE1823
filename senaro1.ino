const int ledPin = 13;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {   // Button is pressed
    digitalWrite(ledPin, LOW);   // Turn LED OFF
  }
  else {   // Button is released
    digitalWrite(ledPin, HIGH);  // Turn LED ON
  }
}