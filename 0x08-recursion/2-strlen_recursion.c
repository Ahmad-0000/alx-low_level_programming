#include "main.h"

/**
 * _strlen_recursion - is a function to calculate the length
 *	 of a string using recursion.
 * @s: is a pointer to the string.
 * Return: is to return the accumulation of the result.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
