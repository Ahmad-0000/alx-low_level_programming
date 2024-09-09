#include "main.h"
#define FIRST_LETTER 1
#define ELSE 0

/**
 * cap_string - is to captialize the first letter from every word in a string
 * @c: is a pointer to the string
 * Return: is to return the product string.
 */

char *cap_string(char *c)
{
	int i, j;
	int where = FIRST_LETTER;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	       	               '?', '"', '(', ')', '{','}'};

	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i] == separators[j])
			{
				where = FIRST_LETTER;
				goto next_letter;
			}
		}
		if (c[i] >= 97 && c[i] <= 122 && where)
		{
			c[i] -= 32;
			where = ELSE;
		}
		else
		{
			for (j = 0; j < 13; j++)
				if (c[i] == separators[j])
					goto next_letter;
			where = ELSE;
		}
		next_letter:
		i++;
	}
	return (c);
}
