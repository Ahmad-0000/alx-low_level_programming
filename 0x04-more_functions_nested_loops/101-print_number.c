#include "main.h"

/**
 * print_number - is a function to print @n
 * @n: is a number to print
 */

void print_number(int n)
{
	int i, tmp = n, special = 0;
	
	if (n == -2147483648)
	{
		special = 1;
		n++;
	}
	if (n < 0)
	{
		_putchar('-');
		n = tmp = -n;
	}
	else if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 1; n > 9; i *= 10)
		n /= 10;
	n = tmp;
	while (1)
	{
		if (i == 1)
		{
			if (special && i == 1)
				_putchar(n + 49);
			else
				_putchar(n + 48);
			return;
		}
		_putchar(n / i + '0');
		if (n >= i)
			n %= i;
		i /= 10;
	}
}
