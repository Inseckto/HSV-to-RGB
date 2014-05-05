#include "HSV2RGB.c"

int redLED = P2_1;
int greenLED = P2_2;
int blueLED = P2_4;

RGBColor color;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 360; i++) {
    color = hsv2rgb(i, 100, 100);
    analogWrite(redLED, color.r);
    analogWrite(greenLED, color.g);
    analogWrite(blueLED, color.b);
    delay(100);
  }
}

