#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * argstostr - is a function to concatenate the args
 *	from the command line into 1 str, each one
 *	with a '\n' after
 * @ac: is the number of the args from the CLI
 * @av: is a pointer to the array of the args
 * Return: is to return a pointer to the new concatenated str.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
	p = (char *)malloc((c + ac + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			p[c] = av[i][j];
			if (av[i][j + 1] == '\0')
				p[++c] = '\n';
		}
	}
	p[c] = '\0';
	return (p);
}
