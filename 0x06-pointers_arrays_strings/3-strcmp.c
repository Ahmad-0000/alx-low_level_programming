#include "main.h"
/**
 * _strcmp - is a function to compare two strings
 * @s1: is a pointer to the 1st string
 * @s2: is a pointer to the 2nd string
 *
 * Return: is to return 1 when i > j, -1 when i < j, 0 when i == j
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	return (i - j);
}
