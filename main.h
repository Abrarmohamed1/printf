#ifndef MAIN_H
#define MAIN_H


#include<stdio.h>
#include <stdarg.h>
#include<unistd.h>
#include<stdlib.h>
int _printf(const char *format, ...);
int printchar(va_list arg);
int print_porcentage(void);


/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
