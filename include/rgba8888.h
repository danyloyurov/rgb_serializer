#ifndef RGBA8888_H_
#define RGBA8888_H_

struct rgba8888 {
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
};

unsigned int serialize_rgba8888(struct rgba8888 format);
struct rgba8888 deserialize_rgba8888(int format);

#endif // RGBA8888_H_

