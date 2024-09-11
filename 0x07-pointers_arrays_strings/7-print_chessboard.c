#include "main.h"

/**
 * print_chessboard - as the name
 * @a: a pointer to an array of 8 characters - 8 arrays = 64 square
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
