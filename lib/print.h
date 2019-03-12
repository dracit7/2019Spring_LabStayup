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

#define FLOAT_PRECISE 1000000

/* The function which you should implement */
int fprintfmt(FILE* stream, const char* fmt, ...);

/* Util functions you may need to call */
void print_int(int, FILE*, int);
void print_float(float, FILE*);