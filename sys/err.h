/* err.h
 * 
 * Error handling methods.
 * 
 */

#ifndef _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define _ERR_H

#pragma once

/* Print the error message to stdout and exit. */
void panic(const char* msg);

/* Shutdown */
void shutdown();
