#include <stdbool.h>

#include "rgb565.h"

#define kRedSize (5)
#define kGreenSize (6)
#define kBlueSize (5)

static _Bool _bit_check(uint8_t value, uint8_t position) {
  return (value & (0x01 << position));
}

uint16_t serialize_rgb565(struct rgb565 format) {
  uint16_t output = 0;

  for(uint8_t red_index = 0; red_index < kRedSize; red_index++) {
    if(_bit_check(format.r, red_index)) output |= (0x01 << red_index);
  }

  output <<= kGreenSize;

  for(uint8_t green_index = 0; green_index < kGreenSize; green_index++) {
    if(_bit_check(format.g, green_index)) output |= (0x01 << green_index);
  }

  output <<= kBlueSize;

  for(uint8_t blue_index = 0; blue_index < kBlueSize; blue_index++) {
    if(_bit_check(format.b, blue_index)) output |= (0x01 << blue_index);
  }

  return output;
}

struct rgb565 deserialize_rgb565(uint16_t format) {
  struct rgb565 output;
  output.r = 0;
  output.g = 0;
  output.b = 0;

  output.r |= (format >> 11);

  uint16_t offset_format = format;
  offset_format <<= 5;
  output.g |= (offset_format >> 10);

  format <<= 11;
  output.b |= (format >> 11);

  return output;
}
