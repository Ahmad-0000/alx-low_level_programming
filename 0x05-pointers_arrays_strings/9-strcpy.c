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
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
