#include"main.h"
/**
 * print_s - print strings.
 * @arg:the string to be printed.
 * Return:the length of the string .
 */

int print_s(va_list arg)
{
	int i;
	int length;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
			return (length);
		}
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
			return (length);
		}
	}
}
