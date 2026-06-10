const int ledPin = 13;
const int buttonPin = 2;

bool ledState = false;
int lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Detect button press
  if (buttonState == LOW && lastButtonState == HIGH) {
    
    ledState = !ledState;  // Toggle LED state
    
    digitalWrite(ledPin, ledState);

    delay(50); // Simple debounce
  }

  lastButtonState = buttonState;
}