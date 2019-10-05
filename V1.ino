#define LED_RED 1
#define LED_YELLOW 3
#define LED_GREEN 4
#define BUTTON 2
#define TIME 2000

void pin(){
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
}

void change(int LED_COLOR){
    digitalWrite(LED_COLOR, HIGH);
    delay(TIME);
    digitalWrite(LED_COLOR, LOW);
}

void flick(){
    int FLICK_TIME = TIME/4;//переменная путается с константой
    for (int amount = 0; amount < 5; amount++)
    {
        digitalWrite(LED_GREEN, LOW);
        delay(FLICK_TIME);
        digitalWrite(LED_GREEN, HIGH);
        delay(FLICK_TIME);
        digitalWrite(LED_GREEN, LOW);
    }
}

void human(){
    digitalWrite(LED_GREEN, LOW);
    change(LED_YELLOW);
    change(LED_RED);
}

void car(){
    change(LED_YELLOW);
    change(LED_RED);
}

void setup(){
    pin();
    attachInterrupt(0, human, FALLING);
}

void loop(){
    digitalWrite(LED_GREEN, HIGH);
    delay(TIME);
    flick();
    car();
}
