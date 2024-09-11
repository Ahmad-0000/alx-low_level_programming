#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - is to print the sum of two diagonals of a 2D
 * @a: a pointer to the first integer in the array
 * @size: is the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, t1, t2, counter;

	i = j = t1 = t2 = counter = 0;
	k = size - 1;
	while (i < size)
	{
		counter = 0;
		t1 += a[i * size + j];
		t2 += a[i * size + k];
		j++;
		k--;
		i++;
	}
	printf("%d, %d\n", t1, t2);
}
