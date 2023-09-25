#include <stdio.h>
#include "main.h"
/**
 * reverse_array - is a function to reverse an array of integers
 * @a: is a pointer to the array
 * @n: is the number of the array elements
 */
void reverse_array(int *a, int n)
{
	int b[n], i, n2, m, s;

	s = n;
	m = n;
	i = 0;
	while (i < n)
	{
		b[i] = a[m - 1];
		i++;
		m--;
	}
	n2 = 0;
	while (n2 < s)
	{
		if (s - n2 == 1)
		{
			printf("%d", b[n2]);
			n2++;
		}
		else
		{
			printf("%d, ", b[n2]);
			n2++;
		}
	}
	printf("\n");
}
