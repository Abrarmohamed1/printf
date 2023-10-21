#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *ph;
	int(*f)();
} match;

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
int _putchar(char c);
int printf_c(va_list arg);
int print_s(va_list arg);
int _strlen(char *str);
int _strlenc(const char *str);
int print_per(void);
int print_int(va_list args, int printed);



#endif
