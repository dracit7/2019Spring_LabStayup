
#include "print.h"

void print_int(int d, FILE* stream, int base) {
  int num = d;
  if (num > base) print_int(num / base, stream, base);
  if (base == 16) {
    putch('0', stream);
    putch('x', stream);
  }
  putch("0123456789ABCDEF"[num % base], stream);
}

void print_float(float f, FILE* stream) {
  int int_part = (int)f;
  int float_part = (f - int_part) * FLOAT_PRECISE;
  print_int(int_part, stream, 10);
  putch('.', stream);
  print_int(float_part, stream, 10);
}

int fprintfmt(FILE* stream, const char* fmt, ...) {

  va_list ap;
  int fmt_d;
  char* fmt_s;
  float fmt_f;

  va_start(ap, fmt);
  while (*fmt) {
    if (*fmt == '%') {
      fmt++;
      switch (*fmt++) {
        case '%':
          putch('%',stream);
          break;
        case 'd':
          fmt_d = va_arg(ap, int);
          print_int(fmt_d, stream, 10);
          break;
        case 'x':
          /* Your code here. */
        case 'f':
          /* Your code here. */
        case 's':
          /* Your code here. */
        default:
          error("Invalid character after %%.");
      }
    } else putch(*fmt,stream);
  }
  va_end(ap);

}