#include "main.h"
/**
 * print_last_digit - is my function to print the last digit of a number
 * @i: is the number to print last digit for
 * Return: is to return a value
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -i;
		_putchar(i % 10 + '0');
	}
	else if (i == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(i % 10 + '0');
	}
	return (9);
}
