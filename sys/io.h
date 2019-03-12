/* io.h
 * 
 * Contains system functions for input and output.
 * 
 */

#ifndef _STDIO_H
#include <stdio.h>
#endif

#ifdef __STDARG_H
#include <stdarg.h>
#endif

#define _IO_H

#pragma once

/* reads the next character from stream and returns it
 * as an unsigned char cast to an int, or EOF on end of file or error. */
int getch(FILE* stream);
/* writes the character c, cast to an unsigned char, to stream.
 * return the character written as an unsigned char cast to an int or EOF on error. */
int putch(int c, FILE* stream);
