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
	int i;
	char *tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	i = 0;
	while (src[i])
	{
		*tmp = src[i];
		i++;
		tmp++;
	}
	*tmp = '\0';
	return (dest);
}
