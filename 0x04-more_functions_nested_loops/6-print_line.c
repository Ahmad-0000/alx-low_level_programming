#include "main.h"
/**
 * print_line - is a function to print a straight line
 * @n: is the length of line in (-) unit
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}
