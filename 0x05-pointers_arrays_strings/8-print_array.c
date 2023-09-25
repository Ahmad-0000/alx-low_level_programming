#include "main.h"
#include <stdio.h>
/**
 * print_array - is a function to print a give number of elements of an array
 * @a: is a pointer to the array
 * @n: is the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
			i++;
		}
		else
		{
			printf("%d, ", a[i]);
			i++;
		}
	}
	printf("\n");
}
