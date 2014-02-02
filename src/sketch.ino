
#define LED_PIN 13
#define INPUT_PIN_0 2
#define INPUT_PIN_1 3
#define INPUT_PIN_2 4
#define INPUT_PIN_3 5
#define INPUT_PIN_4 6
#define INPUT_PIN_5 7
#define INPUT_PIN_6 8
#define INPUT_PIN_7 9

void setup()
{
    //I just made a change
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
    pinMode(INPUT_PIN_0,INPUT);
    pinMode(INPUT_PIN_1,INPUT);
    pinMode(INPUT_PIN_2,INPUT);
    pinMode(INPUT_PIN_3,INPUT);
    pinMode(INPUT_PIN_4,INPUT);
    pinMode(INPUT_PIN_5,INPUT);
    pinMode(INPUT_PIN_6,INPUT);
    pinMode(INPUT_PIN_7,INPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(900);
    String byte = "";
    int nextChar;
    //read all the pins, in order
    nextChar = digitalRead(INPUT_PIN_0);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_1);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_2);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_3);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_4);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_5);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_6);
    byte = byte + nextChar;
    nextChar = digitalRead(INPUT_PIN_7);
    byte = byte + nextChar;
    //print line to serial port
    Serial.println(byte);
}
