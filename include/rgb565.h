#ifndef RGB565_H_
#define RGB565_H_

#include <stdint.h>

struct rgb565 {
  uint8_t r;
  uint8_t b;
  uint8_t g;
};

uint16_t serialize_rgb565(struct rgb565 format);
struct rgb565 deserialize_rgb565(uint16_t format);

#endif // RGB565_H_
