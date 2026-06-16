#include <Adafruit_NeoPixel.h>
#define LED_PIN     4
#define LED_COUNT   8
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_RGBW + NEO_KHZ800);

void setup() {
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  pinMode(A8, INPUT);
  pinMode(1,INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH); //Ensure IR Emmitter is always on
  while (digitalRead(1) == 1){
    //wait until button one is pressed
  }
  strip.begin();
  strip.show();
  strip.setBrightness(128);


}

void loop() {
  int v1 = analogRead(A1);
  int v2 = analogRead(A2);
  int v3 = analogRead(A3);
  int v4 = analogRead(A4);
  int v5 = analogRead(A5);
  int v6 = analogRead(A6);
  int v7 = analogRead(A7);
  int v8 = analogRead(A8);
  if (v1 > 500) {
    strip.setPixelColor(0, strip.Color(255, 0, 0, 0));
  }
  if (v2 > 500) {
    strip.setPixelColor(1, strip.Color(255, 0, 0, 0));
  }
  if (v3 > 500) {
    strip.setPixelColor(2, strip.Color(255, 0, 0, 0));
  }
  if (v4 > 500) {
    strip.setPixelColor(3, strip.Color(255, 0, 0, 0));
  }
  if (v5 > 500) {
    strip.setPixelColor(5, strip.Color(255, 0, 0, 0)); 
  }
  if (v6 > 500) {
    strip.setPixelColor(6, strip.Color(255, 0, 0, 0)); 
  }
  if (v7 > 500) {
    strip.setPixelColor(7, strip.Color(255, 0, 0, 0));
  }
  if (v8 > 500) {
    strip.setPixelColor(8, strip.Color(255, 0, 0, 0)); 
  }

  

}
