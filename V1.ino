const int led_red = 2;
const int led_yellow = 3;
const int led_green = 4;
const int button = 5;

void setup() 
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() 
{
    int buttonState = !digitalRead(button);
    
    digitalWrite(led_green, HIGH);
    flick();

    if (buttonState == HIGH)
    {
        PESH();
    }
    
    else
    {
        CAR();
    }
}

void PESH()
{
    delay(500);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
    delay(1000);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, HIGH);
    delay(2000);
    digitalWrite(led_red, LOW);
}

void CAR()
{
    delay(500);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
    delay(2000);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, HIGH);
    delay(3000);
    digitalWrite(led_yellow, HIGH);
    delay(2000);
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
}

void flick()
{
    delay(3000);
    digitalWrite(led_green,LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
    delay(500);
    digitalWrite(led_green,LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
    delay(500);
    digitalWrite(led_green, LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
}
