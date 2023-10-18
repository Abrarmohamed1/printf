#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD

#include<stdio.h>
#include <stdarg.h>
#include<unistd.h>
#include<stdlib.h>
=======
<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

=======
>>>>>>> df5d5b9ea915d9e4a81c928f6621af5b525f52aa
>>>>>>> 9a8b845959df02fd93a2dfdedf1be4c4380c1ff0
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
