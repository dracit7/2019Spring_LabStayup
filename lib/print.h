/* print.h
 * 
 * Offers effecient approaches to print messages.
 * 
 */

#ifndef _IO_H
#include "../sys/io.h"
#endif

#ifndef _ERR_H
#include "../sys/err.h"
#endif

#define _PRINT_H

#pragma once

#define FLOAT_PRECISE 0.000001

/* The function which you should implement */
int fprintfmt(FILE* stream, const char* fmt, ...);

/* Util functions you may need to call */
void print_int(int, FILE*, int);
void print_float(float, FILE*);

/* Util functions you don't need to call */
void prompt();