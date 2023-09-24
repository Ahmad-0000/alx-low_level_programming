#include "main.h"
/**
 * rev_string - is a function to print a string in reverse
 * @s: a pointer to the string
 */
void rev_string(char *s)
{
	int i, n, f;
	
	char *tmp;

	tmp = s;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	n = 0;
	while (s[n] != '\0')
	{
		tmp[n] = s[i];
		n++;
		i--;
	}
	f = 0;
	while (tmp[f] != '\0')
	{
		s[f] = tmp[f];
		f++;
	}
}
