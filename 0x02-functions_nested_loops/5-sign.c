#include "main.h"
/**
 * print_sign - is a function to print the sign of a number or 0
 * @n: is the number
 * Retunr: is to return a value
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
}
