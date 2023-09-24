#include "main.h"
/**
 * print_triangle - is a function to print a triangle
 * @size: is the width of the base of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > i)
		{
			_putchar(' ');
			j--;
		}
		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
