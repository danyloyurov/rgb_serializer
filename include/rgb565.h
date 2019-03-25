#ifndef RGB565_H_
#define RGB565_H_

struct rgb565 {
  unsigned char r;
  unsigned char g;
  unsigned char b;
};

unsigned int serialize_rgb565(struct rgb565 format);
struct rgb565 deserialize_rgb565(int format);

#endif // RGB565_H_

