
#include "lib/print.h"
#include "lib/command.h"

int main() {

  char* command;

  fprintfmt(stdout, "\nBooting up the system ...\n");
  fprintfmt(stdout, "Welcome to Unique OS!\n\n");
  fprintfmt(stdout, "You may type \'help\' for a list of commands.\n\n");

  while (1) {
    command = readline("$ ");
    if (command != NULL) {
      if (exec_cmd(command) < 0) break;
    }
  }

}