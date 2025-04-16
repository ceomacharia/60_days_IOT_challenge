#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(1000); // wait for a second
  digitalWrite(10, LOW);
  delay(1000); // wait for a second
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}