#include "rgb565.h"

unsigned int serialize_rgb565(struct rgb565 format) {
  unsigned int output = 0;

  output = output ^ format.r;
  output = output << 8;
  output = output ^ format.g;
  output = output << 8;
  output = output ^ format.b;

  return output;
}

struct rgb565 deserialize_rgb565(int format) {
  struct rgb565 output;
  output.r = 0;
  output.g = 0;
  output.b = 0;

  output.b ^= format;
  output.g ^= (format >> 8);
  output.r ^= (format >> 16);

  return output;
}

