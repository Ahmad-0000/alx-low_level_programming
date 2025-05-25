#include "main.h"

/**
 * string_toupper - is a function to convert a string to uppercase
 * @c: is a pointer to the string
 * Return: is to return a pointer to the string after conversion
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
	return (c);
}
