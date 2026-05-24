// Potentiometer Resistance in kOhm

int potPin = A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int sensorValue;

    float resistanceK;

    sensorValue = analogRead(potPin);

    resistanceK = (sensorValue * 10.0) / 1023.0;

    Serial.print("Resistance: ");

    Serial.print(resistanceK);

    Serial.println(" kOhm");

    delay(200);
}