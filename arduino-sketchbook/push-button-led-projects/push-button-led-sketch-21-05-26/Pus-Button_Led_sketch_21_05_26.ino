int push = 2;  //push button connected to Arduino Pin_2
int red = 8;   //Red Led connected to Arduino Pin_8
int yellow=9;  //Yellow Led connected to Arduino Pin_9
int green=10;  //Green Led connected to Arduino Pin_10

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
  int buttonstate=digitalRead(push);

    // If button is pressed
    if(buttonstate == HIGH)
    {
      // Turn LED ON
      digitalWrite(red, HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
    }
    else
    {
      //Turn LED OFF
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
    }
}
