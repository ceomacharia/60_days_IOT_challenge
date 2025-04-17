#include <Arduino.h>

const int buttonPin = 2; // Pin number for the button
const int ledPin = 13; // Pin number for the LED

void setup() {
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    int buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH) {
        digitalWrite(ledPin, HIGH);
    }else{
        digitalWrite(ledPin, LOW);
    }
    
}