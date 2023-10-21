#include"main.h"
/**
 * _printf - custom version of printf
 * @format: printed aegument
 * return : 0 alaways success.*/
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
    
	int len = 0;

    while (*format)
    {
        if (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':
			len += print_char(args);
			break;
			case 's':
			len += print_string(args);
			break;
			case '%':
			len += print_percent(args);
			break;
			case 'd':
			case 'i':
			len += print_integer(args);
			break;
			default:
			len += _putchar('%');
			len += _putchar(*format);
			break;
		}
	}
	else
	{
		len += _putchar(*format)
	}
	format++;
    }
    va_end(args);
    return (len);
}
