const int button1 = 2;
const int button2 = 3;

const int led1 = 13;   //  LED 1
const int led2 = 8;    // LED 2

void setup()
{
    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop()
{
    // If Button1 is pressed
    if (digitalRead(button1) == LOW)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
    }

    // If Button2 is pressed
    if (digitalRead(button2) == LOW)
    {
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
    }
}