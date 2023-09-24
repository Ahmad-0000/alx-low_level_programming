#include "main.h"
/**
 * print_square - is a function to print a square
 * @size: is the width and the height
 */
void print_square(int size)
{
	int i, n;
	
	i = 0;
	while (i < size)
	{
		n = 0;
		while (n < size)
		{
			_putchar('#');
			n++;
		}
		i++;
	}
	_putchar('\n');
}
