#include <stdio.h>
#include "rgba8888.h"

int main() {
  /*RGBA8888 example*/

  struct rgba8888 rgba;
  rgba.r = 54;
  rgba.g = 255;
  rgba.b = 65;
  rgba.a = 255;
 
  unsigned int format = serialize_rgba8888(rgba);  
  struct rgba8888 deserialized = deserialize_rgba8888(format);
 
  printf("[RGBA8888]\nRed: %d\nGreen: %d\nBlue: %d\nAlpha: %d",
         deserialized.r, deserialized.g, deserialized.b, deserialized.a);

  return 0;
}
