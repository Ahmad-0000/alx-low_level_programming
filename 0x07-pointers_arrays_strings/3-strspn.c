#include "main.h"
/**
 * _strspn - is a function like the standard library function (strspn)
 * @s: is a pointer to a string
 * @accept: is another pointer
 *
 * Return: is to return a value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	unsigned int m;

	int j, i, f;

	for (i = 0; accept[i] != '\0';)
	{
		i++;
	}
	for (j = 0; s[j] != '\0';)
	{
		m = n;
		for (f = 0; f < i; f++)
		{
			if (s[j] == accept[f])
			{
				n++;
				f = i;
			}
		}
		if (n == m)
		{
			break;
		}
		j++;
	}

	return (n);
}
