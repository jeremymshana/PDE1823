const int trigPin = 5;
const int echoPin = 4;

const int buzzerPin = 8;

// RGB pins
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

long duration;
float distance;

float getDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0)
  {
    return -1;
  }

  return duration * 0.0343 / 2;
}

void setup()
{
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzerPin, OUTPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  distance = getDistance();

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance <= 5)
  {
    // RED CLOSE
    digitalWrite(buzzerPin, HIGH);

    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  else
  {
    //green FAR
    digitalWrite(buzzerPin, LOW);

    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  delay(100);
}