#include "main.h"
/**
 * print_sign - is a function to print the sign for a number or 0
 * @n: is the number to print the sign for
 * Return: is -1 when negative +1 when positive 0 when 0
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
