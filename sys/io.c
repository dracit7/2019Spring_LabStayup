
#include "io.h"

u_int64_t fake_stack[] = {
  
  // Present function
  0,
  0x70100053,
  1,
  2,
  3,
  4,
  0xf011304c,
  0x000100b4,
  // Backtrace 1
  0,
  0x701000ce,
  2,
  3,
  5,
  8,
  0xf011304c,
  0x000100b4,
  // Backtrace 2
  0,
  0x7010010f,
  1,
  2,
  6,
  24,
  0xf011304c,
  0x000100b4,
  // End
  0

};

int getch(FILE* stream) {
  return fgetc(stream);
}

int putch(int c, FILE* stream) {
  return fputc(c, stream);
}

// To avoid the affection of stack randomization, use a fake stack instead of real %ebp.
u_int64_t get_ebp() {
  // u_int32_t ebp;
  // asm volatile("movl %%ebp, %0" : "=r" (ebp));
  // return ebp;
  fake_stack[0] = (u_int64_t)(fake_stack + 8);
  fake_stack[8] = (u_int64_t)(fake_stack + 16);
  return (u_int64_t)fake_stack;
}