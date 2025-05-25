#include "main.h"
#include <stddef.h>

/**
 * _strstr - is my version of "strstr" standard function
 * @haystack: is a string to search in
 * @needle: is a string to search for
 * Return: is to return a pointer to the substring beginning or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (!haystack)
		return (NULL);
	if (!needle || !needle[0])
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while (haystack[k] && needle[j])
			{
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
				}
				else
				{
					break;
				}
			}
			if (!needle[j])
				return (&(haystack[i]));
		}
	}
	return (NULL);
}
