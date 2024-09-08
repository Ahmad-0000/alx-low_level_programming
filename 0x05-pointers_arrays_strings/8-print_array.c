#include "main.h"
#include <stdio.h>

/**
 * print_array - is a function to print @n elements of an array of integers
 * @a: is a pointer to the array
 * @n: is the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf(i + 1 == n ? "%s\n" : "%s, ", a[i]);
		i++;
	}
}
