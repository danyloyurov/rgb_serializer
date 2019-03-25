#include <stdio.h>

#include "rgba8888.h"
#include "rgb565.h"

int main() {
  /*RGBA8888 example*/
  struct rgba8888 rgba;
  rgba.r = 54;
  rgba.g = 255;
  rgba.b = 65;
  rgba.a = 255;
 
  unsigned int format8888 = serialize_rgba8888(rgba);
  struct rgba8888 deserialized8888 = deserialize_rgba8888(format8888);
 
  printf("[RGBA8888]\nRed: %d\nGreen: %d\nBlue: %d\nAlpha: %d\n",
         deserialized8888.r, deserialized8888.g, deserialized8888.b, deserialized8888.a);

  /*RGB565 example*/
  struct rgb565 rgb;
  rgb.r = 21;
  rgb.g = 42;
  rgb.b = 53;

  unsigned int format565 = serialize_rgb565(rgb);
  struct rgb565 deserialized565 = deserialize_rgb565(format565);

  printf("[RGBA565]\nRed: %d\nGreen: %d\nBlue: %d\n",
         deserialized565.r, deserialized565.g, deserialized565.b);

  return 0;
}

