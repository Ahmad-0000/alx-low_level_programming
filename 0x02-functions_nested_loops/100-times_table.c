#include "main.h"

/**
 * print_times_table - is a function to print the time tables
 * of 0 through n, strating the multiplication from 0 and
 * ending in n, if n < 0 or n > 15, nothing will be printed
 * @n: is the upper limit (included)
 */

void print_times_table(int n)
{
	int result, i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result < 10)
			{
				if (j != 0)
					printing_space(3);
				_putchar(result % 10 + '0');
				_putchar(j == n ? '\n' : ',');
			}
			else if (result < 100)
			{
				printing_space(2);
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(j == n ? '\n' : ',');
			}
			else
			{
				_putchar(' ');
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(j == n ? '\n' : ',');
			}
		}
	}
}

/**
 * printing_space - is a function to print spaces
 * @n: is the number of the spaces
 */

void printing_space(int n)
{
	for (int i = 0; i < n; i++)
		_putchar(' ');
}
