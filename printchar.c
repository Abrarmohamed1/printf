#include"main.h"
/**
 * print_char - writes the character c to stdout
 * @arg: The character to print
 *
 * Return: 1.
 */
int print_char(va_list arg)
{
	unsigned char my_char;

	my_char = va_arg(arg, int);
	_putchar(my_char);
	return (1);
}
