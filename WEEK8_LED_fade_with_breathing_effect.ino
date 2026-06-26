const int led = 3;

void setup()
{
    pinMode(led, OUTPUT);
}

void loop()
{
    // Fade in
    for (int i = 0; i <= 255; i++)
    {
        analogWrite(led, i);
        delay(50);
    }

    // Fade out
    for (int i = 255; i >= 0; i--)
    {
        analogWrite(led, i);
        delay(50);
    }
}
