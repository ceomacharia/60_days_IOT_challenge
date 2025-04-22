#include <Arduino.h>
// This code is for a traffic light simulation using LEDs

const int redLED = 8;
const int yellowLED =9;
const int greenLED = 10;

void setup() {
    pinMode(redLED, OUTPUT);
    pinMode(yellowLED, OUTPUT);
    pinMode(greenLED, OUTPUT);
}

void loop() {
    digitalWrite(redLED, HIGH);
    delay(5000);
    digitalWrite(redLED, LOW);

    digitalWrite(yellowLED, HIGH);
    delay(2000);
    digitalWrite(yellowLED, LOW);

    digitalWrite(greenLED, HIGH);
    delay(5000);
    digitalWrite(greenLED, LOW);
}