const int POT = A2;      // Potentiometer connected to A2
const int RGB_RED = 11;
const int RGB_GREEN = 10;
const int RGB_BLUE = 9;

int val = 0;
int i = 0;

void setup()
{
    Serial.begin(115200);

    pinMode(POT, INPUT);

    pinMode(RGB_RED, OUTPUT);
    pinMode(RGB_GREEN, OUTPUT);
    pinMode(RGB_BLUE, OUTPUT);
 
}
void loop(){
    for (i = 0; i < 20; i++)
    {
        val = analogRead(POT);
    }

    Serial.println(val);

    // Threshold 1
    if (val >= 0 & val < 320)
    {
        digitalWrite(RGB_RED, HIGH);
        delay(1000);
        digitalWrite(RGB_RED, LOW);
    }

    else if (val >= 320 & val < 900)
    {
        digitalWrite(RGB_GREEN, HIGH);
        delay(1000);
        digitalWrite(RGB_GREEN, LOW);
    }

    // Threshold 3
    else if (val >= 900 & val <= 1023)
    {
        digitalWrite(RGB_BLUE, HIGH);
        delay(1000);
        digitalWrite(RGB_BLUE, LOW);
    }
}