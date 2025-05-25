#include "main.h"

/**
 * rev_string - is a function to reverse a string variable
 * @s: a pointer to the string
 */

void rev_string(char *s)
{
	int i, j, half_length;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;
	half_length = i / 2;
	i--;
	j = 0;
	while (j < half_length)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
