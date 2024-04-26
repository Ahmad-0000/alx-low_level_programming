#include "main.h"

/**
 * largest_number - is a function to return the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: is to return the largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

