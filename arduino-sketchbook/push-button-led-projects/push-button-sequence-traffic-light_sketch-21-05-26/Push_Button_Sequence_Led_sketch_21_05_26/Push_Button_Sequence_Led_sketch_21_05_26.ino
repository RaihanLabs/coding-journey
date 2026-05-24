int push = 2;  //push button connected to Arduino Pin_2
int red = 8;   //Red Led connected to Arduino Pin_8
int yellow = 9;  //Yellow Led connected to Arduino Pin_9
int green = 10;  //Green Led connected to Arduino Pin_10

// Variable to store button state
int buttonState;

// Variable to remember previous button state
int lastButtonState = LOW;

// Variable to track which LED should turn on
int ledState = 0;

void setup() 
{
  // Set Button pin as input
  pinMode(push,INPUT);

  // Set LED pins as OUTPUT
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() 
{
  // Read current button state
  buttonState = digitalRead(push);

  if(buttonState == HIGH && lastButtonState == LOW)
  {
    // Move to next LED state
    ledState++;

    // If state becomes more than 3
    // go back to 1
    if(ledState > 4)
    {
      ledState = 1;
    }

    // Turn OFF all LEDs first
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);

    // Turn ON selected LED
    if(ledState == 1)
    {
      digitalWrite(green, HIGH);
    }

    else if(ledState == 2)
    {
      digitalWrite(yellow, HIGH);
    }

    else if(ledState == 3)
    {
      digitalWrite(red, HIGH);
    }

    else if(ledState == 4)
    {
      digitalWrite(yellow, HIGH);
    }

    // Small delay for button debounce
    delay(200);
  }
}
