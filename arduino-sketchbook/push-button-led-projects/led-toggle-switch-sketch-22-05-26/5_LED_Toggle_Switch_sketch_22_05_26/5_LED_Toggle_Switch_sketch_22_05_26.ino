// =========================
// 5 LED Toggle Switch
// One LED ON at a time
// =========================

// LED pins
int leds[] = {8, 9, 10, 11, 12};

// Button pin
int buttonPin = 2;

// Button states
int buttonState = 0;
int lastButtonState = 0;

// Current LED index (0 to 4)
int currentLED = 0;

void setup()
{
    // Set LED pins as OUTPUT
    for(int i = 0; i < 5; i++)
    {
        pinMode(leds[i], OUTPUT);
    }

    // Button as input
    pinMode(buttonPin, INPUT);

    Serial.begin(9600);
}

void loop()
{
    buttonState = digitalRead(buttonPin);

    // Detect button press (LOW → HIGH)
    if(buttonState == HIGH && lastButtonState == LOW)
    {
        // Turn OFF all LEDs first
        for(int i = 0; i < 5; i++)
        {
            digitalWrite(leds[i], LOW);
        }

        // Turn ON current LED
        digitalWrite(leds[currentLED], HIGH);

        Serial.print("LED ON at pin: ");
        Serial.println(leds[currentLED]);

        // Move to next LED
        currentLED = currentLED + 1;

        // If beyond last LED, reset to first
        if(currentLED > 4)
        {
            currentLED = 0;
        }

        delay(500); // debounce
    }

    lastButtonState = buttonState;
}