#include"main.h"
/**
 * print_c - print char  .
 * @arg : the char to be printed .
 * return : success 1 .
 */
int print_c(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);
	return (1);
}
