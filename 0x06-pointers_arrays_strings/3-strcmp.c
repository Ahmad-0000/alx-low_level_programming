#include "main.h"

/**
 * _strcmp - is a function to compare two strings
 * @s1: is a pointer to the 1st string
 * @s2: is a pointer to the 2nd string
 *
 * Return: as "strcmp" standard function return value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
