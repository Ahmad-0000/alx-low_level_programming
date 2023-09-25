#include "main.h"
/**
 * cap_string - is to captialize the first letter from every word in a string
 * @c: is a pointer to the string
 * Return: is to return the product string.
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((i != 0 && c[i] >= 97) && (c[i] <= 122) &&
		(c[i - 1] < 65 || c[i - 1] > 90) &&
		(c[i - 1] < 97 || c[i - 1] > 122))
		{
			c[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (c);
}
