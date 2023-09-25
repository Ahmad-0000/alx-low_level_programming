#include "main.h"
/**
 * _strcat - is a function to concatenate two strings
 * @dest: is a pointer to a string to be concatenated to
 * @src: is a pointer to a string to be concatenated
 *
 * Return: is to return a pointer to the product string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	j--;
	k = i + 1;
	n = 0;
	while (k <= (i + j + 1))
	{
		dest[k] = src[n];
		k++;
		n++;
	}
	return (dest);
}
