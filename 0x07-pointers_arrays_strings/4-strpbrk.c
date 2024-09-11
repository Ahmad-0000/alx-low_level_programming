#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - is a function analog to the standard "strpbrk" function
 * @s: is a pointer to the string to search in
 * @accept: is a pointer of the string containing the accepted characters
 * Return: is to return a pointer to the first occurence to any of the
 * 	characters in "accept" in "s"
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (&(s[i]));
		i++;
	}
	return (NULL);
}
