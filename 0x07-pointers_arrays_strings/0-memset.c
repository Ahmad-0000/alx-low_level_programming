#include "main.h"
/**
 * _memset - is a function to a fill an array with a constant
 * @s: is a pointer to the array to fill
 * @b: is the constant character to fill with
 * @n: is the number of the times (b) will be filled in the array
 *
 * Return: is to return a pinter to the filled array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
