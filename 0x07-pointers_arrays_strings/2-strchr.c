#include "main.h"
#include <stddef.h>

/**
 * _strchr - is a function to locate a character in a string
 * @s: is the string to locate the character in
 * @c: is the character to loacate
 *
 * Return: to return a pointer to the character in the string of NULL if none.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	if (c == '\0')
		return (&(s[i]));
	return (NULL);
}
