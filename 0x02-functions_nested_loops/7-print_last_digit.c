#include "main.h"
#include <limits.h>
/**
 * print_last_digit - is my function to print the last digit of a number
 * @i: is the number to print last digit of
 * Return: is to return the value of the last digit
 */

int print_last_digit(int i)
{
	if (i < 0 && i != INT_MIN)
		i = -i;
	else if (i == INT_MIN)
		i = 8;
	_putchar(i % 10 + '0');
	return i % 10;
}
