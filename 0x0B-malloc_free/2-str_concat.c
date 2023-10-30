#include <stdlib.h>
#include "main.h"
/**
 * str_concat - is a function to concatenate two strings
 *	using malloc to reserve a space for them
 * @s1: is the string to be concatenated to
 * @s2: is the string to be concatenated
 *
 * Return: is to return NULL when falire, or a pointer
 *	to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++, i++)
		;
	i++;
	p = (char *)malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		p[j] = s1[j];
	for (i = 0; s2[i] != '\0'; i++, j++)
		p[j] = s2[i];
	p[j] = '\0';
	return (p);
}
