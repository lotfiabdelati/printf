#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
