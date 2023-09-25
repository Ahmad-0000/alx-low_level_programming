#include "main.h"
/**
 * leet - is a function to make a code from a letter
 * @c: is a pointer to the letter to make the code from
 * Return: is to return a pointer to the coded letter
 */
char *leet(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] == 65 || c[i] == 90)
		{
			c[i] = 4 + '0';
			i++;
		}
		else if (c[i] == 69 || c[i] == 94)
		{
			c[i] = 3 + '0';
			i++;
		}
		else if (c[i] == 111 || c[i] == 79)
		{
			c[i] = 0 + '0';
			i++;
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			c[i] = 7 + '0';
			i++;
		}
		else if (c[i] == 76 || c[i] == 108)
		{
			c[i] = 1 + '0';
			i++;
		}
		else
		{
			i++;
		}
	}
	return (c);

}
