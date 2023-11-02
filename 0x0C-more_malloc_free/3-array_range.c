#include "main.h"
/**
 * array_range - is a function to make an array
 *	from the elements min (included) to max (included)
 * @min: is the first element in the array
 * @max: is the last element in the array
 *
 * Return: is to return a pointer to the array
 *	or NULL when either (min > max) or malloc
 *	has failed
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(max - min + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		p[i] = min++;
	return (p);
}
