#include "main.h"

/**
 * reverse_array - is a function to reverse an array of integers
 * @a: is a pointer to the array
 * @n: is the number of the array elements
 */

void reverse_array(int *a, int n)
{
	int i, half, tmp;

	i = 0;
	half = n / 2;
	n--;
	while (i < half)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
