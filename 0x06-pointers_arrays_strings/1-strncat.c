#include "main.h"
/**
 * _strncat - is a function to concatenate two strings
 * @dest: is a pointer to a string to be concatenated to
 * @src: is a pointer to a string to be concatenated
 * @n: is the number of characters form src to be concatenated
 *
 * Return: is to return a pointer to the product string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	z = 0;
	while (z < n)
	{
		if (n <= j)
		{
			dest[i] = src[z];
			z++;
			i++;
		}
		else
		{
			n = j;
			dest[i] = src[z];
			z++;
			i++;
		}
	}
	return (dest);
}
