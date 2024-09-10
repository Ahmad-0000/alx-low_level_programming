#include "main.h"

/**
 * leet - is a function to encode @c into 1337
 * @c: is a string
 * Return: is to return a pointer to the coded letter
 */

char *leet(char *c)
{
	int i, j;
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char digits[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == letters[j] || c[i] == (letters[j] + 32))
				c[i] = digits[j];
		}
		i++;
	}
	return (c);

}
