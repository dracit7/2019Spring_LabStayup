
#include "io.h"

int getch(FILE* stream) {
  return fgetc(stream);
}

int putch(int c, FILE* stream) {
  return fputc(c, stream);
}