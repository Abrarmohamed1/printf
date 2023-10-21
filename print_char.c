#include"main.h"
/**
 * print_char - Print a character to the standard output.
 *
 * @args: A va_list containing the character to be printed.
 *
 * @return: Returns the number of characters printed (1 in this case).
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (0);
}

