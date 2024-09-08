#include "main.h"

/**
 * _strcpy - is my version of "strcpy" standard function
 * @dest: is the destination
 * @src: is the string to be copied
 *
 * Return: is to return a pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
		i++;
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
