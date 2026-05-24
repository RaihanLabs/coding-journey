// =========================
// 5 LED Blink Project
// Pins 8 to 12
// =========================

// LED pins
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

void setup()
{
    // Set all LED pins as OUTPUT
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
}

void loop()
{
    // Turn all LEDs ON
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);

    // Wait 1 second
    delay(1000);

    // Turn all LEDs OFF
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // Wait 1 second
    delay(1000);
}