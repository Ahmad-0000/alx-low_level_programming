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
	int i;
	char *tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	i = 0;
	while (src[i] && i < n)
	{
		*tmp = src[i];
		tmp++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}
