#include "main.h"
/**
 * print_diagonal - is a function to print diagonal
 * @n: is the the length of the diagonal line with (\) unint
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		int a = 0;

		while (a < i)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
