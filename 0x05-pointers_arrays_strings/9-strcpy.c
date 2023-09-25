#include "main.h"
/**
 * _strcpy - is a functio to concatenate two strings
 * @dest: is a pointer of the string to be concatenated to
 * @src: is a pointer to the string to be concatenated
 *
 * Return: is to return a pointer to the product string
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (n <= i)
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
