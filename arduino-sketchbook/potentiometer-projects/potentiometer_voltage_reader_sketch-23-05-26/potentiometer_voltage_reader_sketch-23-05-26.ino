// Project 5
// Potentiometer Voltage Reader

int potPin = A0;      // Potentiometer connected to A0

void setup()
{
    Serial.begin(9600);   // Start Serial Monitor
}

void loop()
{
    int sensorValue;

    sensorValue = analogRead(potPin);

    Serial.print("Pot Value: ");
    Serial.println(sensorValue);

    delay(1000);
}