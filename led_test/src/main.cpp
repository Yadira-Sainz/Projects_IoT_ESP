#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 1
#define DATA_PIN 48
int i=0;

CRGB leds[NUM_LEDS];
void setup() {

Serial.println("SETUP ....");
FastLED.addLeds<SK6812, DATA_PIN, GRB>(leds, NUM_LEDS);
Serial.begin(115200);
pinMode(8,INPUT);
}

void loop() {
int b = digitalRead(8);

if (b == 1){
  Serial.println("LED is OFF");
  leds[0] = CRGB::Green;
  FastLED.show();
  Serial.println("GREEN LED is ON");
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  Serial.println("LED is OFF");
  delay(1500);
}
Serial.println("LED is OFF");
//delay(5000);
}
