/* io.h
 * 
 * Contains system functions for input and output.
 * 
 */

#ifndef _STDIO_H
#include <stdio.h>
#endif

#ifndef __STDARG_H
#include <stdarg.h>
#endif

#ifndef _READLINE_H_
#include <readline/readline.h>
#endif

#ifndef _STRINGS_H
#include <strings.h>
#endif

#ifndef _SYS_TYPES_H
#include <sys/types.h>
#endif

#define _IO_H
#define BUF_SIZE 128

#pragma once

/* reads the next character from stream and returns it
 * as an unsigned char cast to an int, or EOF on end of file or error. */
int getch(FILE* stream);
/* writes the character c, cast to an unsigned char, to stream.
 * return the character written as an unsigned char cast to an int or EOF on error. */
int putch(int c, FILE* stream);

u_int64_t get_ebp();