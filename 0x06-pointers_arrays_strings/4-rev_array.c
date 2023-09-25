#include <stdio.h>
#include "main.h"
/**
 * reverse_array - is a function to reverse an array of integers
 * @a: is a pointer to the array
 * @n: is the number of the array elements
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	n -= 1;
	while (i <= n)
	{
		if (n == 0)
		{
			printf("%d", a[n]);
			n--;
		}
		else
		{
			printf("%d, ", a[n]);
			n--;
		}
	}
	printf("\n");
}
