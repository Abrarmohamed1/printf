#include"main.h"
/**
 * print_string - print string to the standerd output.
 * @args: A va_list containing the character to be printed.
 * Return : print_string return the length of the string
 *
*/

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	while (str[len])
	{
	len += _putchar(str[len]);
	}
	return (len);
}
