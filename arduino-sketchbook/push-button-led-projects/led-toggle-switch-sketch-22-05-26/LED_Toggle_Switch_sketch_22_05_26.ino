// ==========================
// Project 4
// LED Toggle Switch
// ==========================

// LED pin
int ledPin = 8;

// Button pin
int buttonPin = 2;

// Stores current button state
int buttonState = 0;

// Stores previous button state
int lastButtonState = 0;

// LED ON/OFF state
bool ledState = false;

void setup()
{
    // LED is output
    pinMode(ledPin, OUTPUT);

    // Button is input
    pinMode(buttonPin, INPUT);

    // Start serial monitor
    Serial.begin(9600);
}

void loop()
{
    // Read button state
    buttonState = digitalRead(buttonPin);

    // Detect button press
    // Only trigger when button changes
    // from LOW to HIGH
    if(buttonState == HIGH && lastButtonState == LOW)
    {
        // Toggle LED state
        ledState = !ledState;

        // Apply LED state
        digitalWrite(ledPin, ledState);

        // Print status
        Serial.print("LED State: ");

        if(ledState == true)
        {
            Serial.println("ON");
        }
        else
        {
            Serial.println("OFF");
        }

        // Small debounce delay
        delay(50);
    }

    // Save current button state
    lastButtonState = buttonState;
}