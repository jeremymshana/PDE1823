// Include the required Wire library for I2C
int LED1 = 5;
int LED2 = 6;
// Set a variable which we can change in the interrupt function
volatile int currentLED = LED1;
void setup(){
// Set the button pin as an input with PULL UP resistor
pinMode(3, INPUT_PULLUP);
// Attach an interrupt to that pin which corresponds to interrupt 1
// It will trigger when the input signals is FALLING
attachInterrupt(1, changeLED, FALLING);
}
// Function that is being triggered by the interrupt
void changeLED(){
if (currentLED == LED1) currentLED = LED2;
else currentLED = LED1;
}
void loop(){
// Fade In
for (int i = 0; i < 256; i++){
  analogWrite(currentLED, i);
  delay(10);
}
// Fade Out
for (int i = 255; i > 0; i--){
  analogWrite(currentLED, i);
  delay(10);
 }
}