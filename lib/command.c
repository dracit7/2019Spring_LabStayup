
#include "command.h"

struct Command cmd_list[] = {
  {"help", "Display this list of commands", console_help}
  /* Your code here */
};

int console_help(int argc, char** argv) {
  for (int i = 0; i < COMMAND_NUM; i++) {
    fprintfmt(stdout, "%s - %s\n", cmd_list[i].name, cmd_list[i].description);
  }
}

int console_backtrace(int argc, char** argv) {

  fprintfmt(stdout, "Stack backtrace:\n\tPresent function:\n");

  // Make sure that you understand the use of %ebp and %eip registers.
  u_int64_t ebp, eip;
  int iter = 1;
  // Use a magic function to get the value of %ebp.
  ebp = get_ebp();

  // Now, how can we get the value of %eip by %ebp?
  eip = /* Replace 0 with your solution. */ 0;

  // Print the information in restricted format.
  /* Your code here. */

  // Start backtracing, Using a infinite loop:
  while (1) {

    ebp = /* How to backtrace? Replace 0 with your solution. */ 0;
    if (!ebp) break;
    
    // Calculate eip and print information.
    /* Your code here. */

  }

  fprintfmt(stdout, "Backtrace finished.\n");

}

int exec_cmd(char* command) {

  int argc = 0;
  char* argv[MAX_ARGS] = {0};
  char* ptr = command;

  while (1) {

    // Get rid of spaces
    while (*ptr && strchr(WHITESPACE, *ptr)) *ptr++ = 0;
    // The end of the command
    if (*ptr == 0) break;

    // Parse an argument
    if (argc >= MAX_ARGS - 1) {
      fprintfmt(stdout, "Error: Too many arguments(%d).\n", argc);
      return 0;
    }
    argv[argc++] = ptr;
    while (*ptr && !strchr(WHITESPACE, *ptr)) ptr++;

  }
  argv[argc] == 0;

  // Invoke the command
  if (argc == 0) return 0;
  for (int i = 0; i < COMMAND_NUM; i++) {
    if (strcmp(argv[0], cmd_list[i].name) == 0) {
      return cmd_list[i].func(argc,argv);
    }
  }
  fprintfmt(stdout, "Error: Unknown command: %s.\n", argv[0]);
  return 0;

}