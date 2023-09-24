#include "main.h"
/**
 * print_line - is a function to print a straight line
 * @n: is the length of line in (_) unit
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
