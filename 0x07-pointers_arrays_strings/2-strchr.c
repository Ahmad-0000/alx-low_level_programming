#include "main.h"
/**
 * _strchr - is a function to locate a character in a string
 * @s: is the string to locate the character in
 * @c: is the character to loacate
 *
 * Return: to return a string beginning with the character c if found
 *  or 0 otherwise
 */
char *_strchr(char *s, char c)
{
	int i, n, m, a;

	char *p = s;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	m = i + 1;
	for (n = 0; n < i; n++)
	{
		if (s[n] == c)
		{
			m = n;
			break;
		}
	}
	if (m == i + 1)
	{
		return (0);
	}
	else
	{
		for (a = 0; m < i; m++, a++)
			p[a] = s[m];
	}
	for (a = a; p[a] != '\0'; a++)
	{
		p[a] = '\0';
	}
	return (p);
}
