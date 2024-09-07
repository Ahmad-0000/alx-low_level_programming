#include "main.h"
/**
 * print_number - is a function to print @n
 * @n: is a number to print
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 1; i >= 1; i *= 10)
	{
		if (i > n)
		{
			i /= 10;
			break;
		}
	}
	while (1)
	{
		if (i == 1)
		{
			_putchar(n + '0');
			return;
		}
		_putchar(n / i + '0');
		if (n >= i)
			n %= i;
		i /= 10;
	}
}
