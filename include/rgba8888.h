#ifndef RGBA8888_H_
#define RGBA8888_H_

#include <stdint.h>

struct rgba8888 {
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
};

uint32_t serialize_rgba8888(struct rgba8888 format);
struct rgba8888 deserialize_rgba8888(uint32_t format);

#endif // RGBA8888_H_
