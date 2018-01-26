#include "neopixel.h"

#define PIXEL_PIN D2
#define PIXEL_COUNT 12
#define PIXEL_TYPE WS2812

Adafruit_NeoPixel ring =
  Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

void setup() {
  ring.begin();

  for(int i = 0; i < ring.numPixels(); i++) {
    ring.setPixelColor(i, 100, 100, 0);
  }
  ring.show();
}

void loop() {

}
