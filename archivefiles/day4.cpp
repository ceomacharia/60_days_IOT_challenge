#include <Arduino.h>

const int led = 3;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    for (int brightness = 0; brightness <=225; brightness++)
    {
        analogWrite(led, brightness);
        delay(10);
    }
    
    for (int brightness = 225; brightness >= 0; brightness--)
    {
        analogWrite(led, brightness);
        delay(10);
    }
    
}