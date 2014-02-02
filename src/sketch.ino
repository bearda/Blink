
#define LED_PIN 13
#define INPUT_PIN 2

void setup()
{
    //I just made a change
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
    pinmode(INPUT_PIN,INPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(900);
    int buttonState = digitalRead(INPUT_PIN);
    Serial.println(buttonState);
}
