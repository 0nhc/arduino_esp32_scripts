#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 1
#define PIN 38
#define DELAYVAL 500

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();
}

void loop()
{
  int i=0;
  
  pixels.setPixelColor(i, uint32_t(pixels.Color(150, 0, 0)));
  pixels.show();
  delay(DELAYVAL);

  pixels.setPixelColor(i, uint32_t(pixels.Color(0, 150, 0)));
  pixels.show();
  delay(DELAYVAL);

  pixels.setPixelColor(i, uint32_t(pixels.Color(0, 0, 150)));
  pixels.show();
  delay(DELAYVAL);
}