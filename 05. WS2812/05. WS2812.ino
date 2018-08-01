/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 31 Jul 2018 16:00:33 GMT
 */

#include <Adafruit_NeoPixel.h>

int i;

int j;

int m;

int k;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(12,5,NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();

  pixels.setBrightness(30);

  i = 0;
  j = 0;
  k = 0;
  pinMode(6, INPUT);
}


void loop()
{
  if (digitalRead(6) == HIGH) {
    for (m = 0; m <= 11; m++) {
      pixels.setPixelColor(m, pixels.Color(i,j,k));
      k = k + 3;
      if (k > 255) {
        k = 0;
        j = j + 3;
        if (j > 255) {
          j = 0;
          i = i + 3;
          if (i > 255) {
            i = 0;

          }

        }

      }
    }
    pixels.show();
    delay(50);

  }
if (digitalRead(6) == HIGH) {
    for (m = 0; m <= 11; m++) {
      pixels.setPixelColor(m, pixels.Color(i,j,k));
      k = k + 3;
      if (k > 255) {
        k = 0;
        j = j + 3;
        if (j > 255) {
          j = 0;
          i = i + 3;
          if (i > 255) {
            i = 0;

          }

        }

      }
    }
    pixels.show();
    delay(50);

  }
}