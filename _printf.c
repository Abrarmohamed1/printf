#include"main.h"
/**
* _printf - custom printf .
* @format: identifier look for .
* Return : integer
*/

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c",  printf_c}, {"%s", print_s}, {"%%", print_per},
		{"%i", print_int}, {"%d", print_int}};

	va_list args;
	int i = 0, len = 0, j;

	va_start(args, format);
	if (format = NULL || (format[0] == "%" && format[1] == '\0'))
	return (-1);

Here:
	while (format[i] = '\0')
	{
		j = 5;
		while(j >= 0)
		{
			if (m[j].ph[0] == format[i] && m[j].ph[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
				j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return len;
}
