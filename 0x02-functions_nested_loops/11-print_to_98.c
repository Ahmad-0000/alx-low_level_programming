#include <stdio.h>

/**
 * print_to_98 - is a function to print a series of
 * numbers up to 98 (included), in the two directions
 * @n: is the number to start printing from
 */

void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf(i == 0 ? "%d" : ", %d", n++);
			i++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf(i == 0 ? "%d" : ", %d", n--);
			i++;
		}
	}
	printf("\n");
}
