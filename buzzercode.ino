const int ldrPin = A0;
const int ledPin = 13;
const int buzzerPin = 7;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    int ldrValue = analogRead(ldrPin);

    Serial.println(ldrValue); // View readings in Serial Monitor

  
    if (ldrValue>800) // LDR covered dark
    {
        digitalWrite(ledPin,HIGH);
        
    }
    else if(ldrValue<200) // LDR exposed to light
    {   
        digitalWrite(buzzerPin, HIGH);
        delay(200);
        
    }
    else{ //LDR exposed to torch
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzerPin, LOW);
        
    }

    delay(100);
}