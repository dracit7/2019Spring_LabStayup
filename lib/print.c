
#include "print.h"

void print_int(int d, FILE* stream, int base) {
  int num = d;
  if (num >= base) print_int(num / base, stream, base);
  putch("0123456789ABCDEF"[num % base], stream);
}

void print_float(float f, FILE* stream) {
  int int_part = (int)f;
  float float_part = f - (float)int_part;
  while (float_part - (int)float_part > FLOAT_PRECISE) float_part *= 10;
  print_int(int_part, stream, 10);
  putch('.', stream);
  print_int((int)float_part, stream, 10);
}

int fprintfmt(FILE* stream, const char* fmt, ...) {

  va_list ap;
  int fmt_d;
  char* fmt_s;
  float fmt_f;
  unsigned int fmt_u;

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
          putch('0',stream);
          putch('x',stream);
          /* Your code here. */

        case 'f':
          /* Your code here. */

        case 's':
          /* Your code here. */
        
        default:
          panic("Invalid character after %.");
      }
    } else if (*fmt == '\\') {
      fmt++;
      switch (*fmt++) {
        case 'n':
          putch('\n',stream);
          break;
        case 't':
          putch('\t',stream);
          break;
        default:
          panic("Invalid character after \\.");
      }
    } else {
      putch(*fmt,stream);
      fmt++;
    }
  }
  va_end(ap);

}

void prompt() {
  fprintfmt(stdout, "$ ");
}