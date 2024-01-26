#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 1
#define PIN 38
#define DELAYVAL 1000

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();
}

void loop()
{
  int i=0;
  
  pixels.setPixelColor(i, uint32_t(pixels.Color(50, 0, 0)));
  pixels.show();
  delay(DELAYVAL);

  pixels.setPixelColor(i, uint32_t(pixels.Color(0, 50, 0)));
  pixels.show();
  delay(DELAYVAL);

  pixels.setPixelColor(i, uint32_t(pixels.Color(0, 0, 50)));
  pixels.show();
  delay(DELAYVAL);
}