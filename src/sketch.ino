
#define LED_PIN 13
#define OUTPUT_PIN_0 2
#define OUTPUT_PIN_1 3
#define OUTPUT_PIN_2 4
#define OUTPUT_PIN_3 5
#define OUTPUT_PIN_4 6
#define OUTPUT_PIN_5 7
#define OUTPUT_PIN_6 8
#define OUTPUT_PIN_7 9

String readString = "";
char character;

void setup()
{
    //I just made a change
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
    pinMode(OUTPUT_PIN_0,OUTPUT);
    pinMode(OUTPUT_PIN_1,OUTPUT);
    pinMode(OUTPUT_PIN_2,OUTPUT);
    pinMode(OUTPUT_PIN_3,OUTPUT);
    pinMode(OUTPUT_PIN_4,OUTPUT);
    pinMode(OUTPUT_PIN_5,OUTPUT);
    pinMode(OUTPUT_PIN_6,OUTPUT);
    pinMode(OUTPUT_PIN_7,OUTPUT);
    Serial.println("Please write a byte");
}

void loop()
{
    while (Serial.available() > 0) {
        delay(5);
        character = Serial.read();
        readString += character;
        Serial.print(character);
    }
    //wait for the buffer to grow
    if (readString.length() >= 8) {
        //read all the pins, in order
        digitalWrite(OUTPUT_PIN_0,int(readString[0] - 48));
        digitalWrite(OUTPUT_PIN_1,int(readString[1] - 48));
        digitalWrite(OUTPUT_PIN_2,int(readString[2] - 48));
        digitalWrite(OUTPUT_PIN_3,int(readString[3] - 48));
        digitalWrite(OUTPUT_PIN_4,int(readString[4] - 48));
        digitalWrite(OUTPUT_PIN_5,int(readString[5] - 48));
        digitalWrite(OUTPUT_PIN_6,int(readString[6] - 48));
        digitalWrite(OUTPUT_PIN_7,int(readString[7] - 48));
        Serial.println("  Input received!");
        Serial.println("Please write a byte");
        readString = "";
    }
    //print line to serial port
}
