/* command.h
 * 
 * Contains commands of the OS console.
 * 
 */

#ifndef _IO_H
#include "../sys/io.h"
#endif

#ifndef _ERR_H
#include "../sys/err.h"
#endif

#ifndef _PRINT_H
#include "print.h"
#endif

#define _COMMAND_H

/* You should make COMMAND_NUM in step with the size of cmd_list. */
#define COMMAND_NUM 1
/* The size of argv */
#define MAX_ARGS 16
/* Spaces in C */
#define WHITESPACE "\r\t\n "

struct Command {
  const char* name;
  const char* description;
  int (*func)(int argc, char** argv);
};

int console_help(int argc, char** argv);
int console_backtrace(int argc, char** argv);

int exec_cmd(char* command);