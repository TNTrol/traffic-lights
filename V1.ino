int led_red = 2;
int led_yellow = 3;
int led_green = 4;

void setup() 
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() 
{
    digitalWrite(led_red, HIGH);
             delay(8500);
    digitalWrite(led_yellow,HIGH);
             delay(2000);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
             delay(8500);
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_green,LOW);
             delay(2000);
    digitalWrite(led_yellow, LOW);         
}
