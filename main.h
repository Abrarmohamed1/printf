#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int _printf(const char *format, ...);

#endif
