#include <stdlib.h>
#include "main.h"
/**
 * _strdup - is a function to do the same job of
 *	the srandard function strdup
 * @str: is a pointer to a string to be copied
 * Return: is to return NULL if the memory is not allocated
 *	in the heap or a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	for (i = 0; str[i] != '\0' ; i++)
		;
	i++;
	s = (char *)malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i ; i++)
		s[i] = str[i];
	return (s);
}
