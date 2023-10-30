#include "main.h"
#include <stdlib.h>
/**
 * create_array - is a function to create an array dynamically using
 *	malloc and filling it with the char (c)
 * @theSize: is the size of the array
 * @c: is the character of the array to be filled with
 *
 * Return: is to return 0 if theSize is 0 or the
 *	pointer that is returned by malloc
 */
char *create_array(unsigned int theSize, char c)
{
	char *s;
	unsigned int i;

	if (theSize == 0)
		return (NULL);
	s = (char *)malloc(sizeof(char) * theSize);
	for (i = 0; i < theSize - 1; i++)
		s[i] = c;
	s[theSize - 1] = '\0';
	return (s);
}
