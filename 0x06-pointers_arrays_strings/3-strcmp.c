#include "main.h"
/**
 * _strcmp - is a function to compare two strings
 * @s1: is a pointer to the 1st string
 * @s2: is a pointer to the 2nd string
 *
 * Return: is to return 15 when i > j, -15 when i < j, 0 when i == j
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	j--;
	if (i > j)
		return (15);
	else if (j > i)
		return (-15);
	else
		return (0);
}
