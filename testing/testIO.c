
#include "../lib/print.h"

int main() {

  // Testcase 1 Strings
  printf("\nCase 1:\n");
  printf("Format:   \"Hello world!\\n\"\n");
  printf("Expected: Hello world!\nGot:      ");
  fprintfmt(stdout,"Hello world!\n");

  // Testcase 2 Numbers
  printf("\nCase 2:\n");
  printf("Format:   \"[%%f] He%%d world, %%x!\\n\", 2398.6721, 110, 256\n");
  printf("Expected: [2398.6721191] He110 world, 0x100!\nGot:      ");
  fprintfmt(stdout,"[%f] He%d world, %x!\n", 2398.6721, 110, 256);

  // Testcase 3 Strings
  printf("\nCase 3:\n");
  printf("Format:   \"%%s\\n\", \"Hello world!\"\n");
  printf("Expected: Hello world!\nGot:      ");
  fprintfmt(stdout,"%s\n","Hello world!");

  putchar('\n');

}