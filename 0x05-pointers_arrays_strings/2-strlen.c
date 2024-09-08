#include "main.h"

/**
 * _strlen - my copy of standard "strlen" function
 * @s: is a pointer to a string
 * Return: is to return the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
