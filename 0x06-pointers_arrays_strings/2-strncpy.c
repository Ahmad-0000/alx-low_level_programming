#include "main.h"
/**
 * _strncpy - is a function to copy a string
 * @dest: is a pointer to a string that will be copied upon
 * @src: is a pointer to a string that will be copied from
 * @n: is the most number of characters to be copied
 *
 * Return: is to return a pointer to the product string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
