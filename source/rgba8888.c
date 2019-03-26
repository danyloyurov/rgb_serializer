#include "rgba8888.h"

uint32_t serialize_rgba8888(struct rgba8888 format) {
  uint32_t output = 0;

  output = output ^ format.r;
  output = output << 8;
  output = output ^ format.g;
  output = output << 8;
  output = output ^ format.b;
  output = output << 8;
  output = output ^ format.a;

  return output;
}

struct rgba8888 deserialize_rgba8888(uint32_t format) {
  struct rgba8888 output;
  output.r = 0;
  output.g = 0;
  output.b = 0;
  output.a = 0;

  output.a ^= format;
  output.b ^= (format >> 8);
  output.g ^= (format >> 16);
  output.r ^= (format >> 24);

  return output;
}
