
#include "err.h"

void panic(const char* msg) {
  printf("\nError: %s\nShutting down the operating system...\n\n",msg);
  exit(1);
}

void shutdown() {
  exit(0);
}