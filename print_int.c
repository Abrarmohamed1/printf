#include"main.h"
/**
 * print_integer - print intgers to the stander output.
 * @args: the pritend number.
 * return : 0 alaways success.
*/
void print_integer(va_list args)
{
	int num = va_arg(args, int);
	int len = 0;

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		len += _putchar('0');
		return (len);
	}

	int power = 1;

	while (num / power >= 10)
	{
		power *= 10;
	}
	while (power > 0)
	{
		int digit = num / power;

		len += _putchar('0' + digit);
		num %= power;
		power /= 10;
	}
	return (len);
}
