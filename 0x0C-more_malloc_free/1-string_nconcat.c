#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - is a function to concatenate the first n
 *	characters of the string s2 into s1
 * @s1: is the string to be concatenated to
 * @s2: is the string to be concatenated
 * @n: is the number of characters from s2 to be concatencated
 *
 * Return: is to return a pointer to the new string, or NULL
 *	when falire
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j] != '\0'; j++)
			;
	n = n > (unsigned long)j ? (unsigned long)j : n;
	p = malloc((n + i + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; (unsigned long)j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
