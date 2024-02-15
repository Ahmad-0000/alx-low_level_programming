#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int WordsCounting(char *str)
{
	int i, theWords = 0, inWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && inWord == 0)
		{
			theWords++;
			inWord = 1;
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			inWord = 0;
		}
	}
	return (theWords);
}
/**
 * Filling - is a function to fill the 2D array that was
 *	allocated dynamically using malloc with the correct
 *	order of the characters
 * @p: is a double pointer to the 2D array
 * @str: is the string to be cut
 * @maxLen: is the length of the longest word in the array
 *	(the trailing 1 is due to the null terminator)
 * Return: is to return a double pointer to the filled 2D array
 */
char **Filling(char **p, char *str)
{
	int i, j, c = 0, inWord = 0;


	for (i = 0; p[i] != NULL ; i++)
	{
		for (j = 0; p[i][j] != '\0'  ; c++)
		{
			if (str[c] != ' ' && str[c] != '\t' && inWord == 0)
			{
				p[i][j] = str[c];
				inWord = 1;
				j++;
			}
			else if (inWord == 1 && str[c] != '\t' && str[c] != ' ')
			{
				p[i][j] = str[c];
				j++;
			}
			else if ((str[c] == ' ' || str[c] == '\t') && inWord == 1)
			{
				p[i][j] = '\0';
				inWord  = 0;
				c++;
				break;
			}
			if (p[i][j] == '\0')
				c++;
		}
	}
	return (p);
}

/**
 * strtow - is a function to split a 2D array into words
 *	(basically by filling a 2D array with them),
 *	each of which in a separate array and is null terminated
 * @str: is the string to work upon
 * Return: is to return a pointer to the filled 2D array
 */
char **strtow(char *str)
{
	char **p;
	int i, inWord = 0, theWords = 0, j = 0, theLen = 0, f = 1;

	if (str == NULL)
		return (NULL);
	theWords = WordsCounting(str);
	printf("The words are not really %d\n", ++theWords);
	p = ((theWords - 1) == 0) ? NULL : (char **)malloc(sizeof(char *) * theWords);
	if (p == NULL)
		return (NULL);
	p[theWords - 1] = NULL;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t') && f == 1)
			continue;
		if (str[i] != ' ' && str[i] != '\t' && inWord == 0)
		{
			inWord = 1;
			f = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			inWord = 0;
			printf("The length of the word is %d\n", theLen);
			if (theLen != 0)
				p[j++] = (char *)malloc(sizeof(char) * (theLen + 1));
			if (p[j - 1] == NULL && j != theWords)
				return (NULL);
			p[j - 1][theLen] = (theLen != 0) ? '\0' : p[j - 1][theLen];
			for (int k = 0; k < theLen; k++)
				p[j - 1][k] = 1;
			theLen = 0;
		}
		if (inWord == 1)
			theLen++;
	}
	if (theLen != 0)
	{
		p[j - 1] = (char *)malloc(sizeof(char) * (theLen + 1));
		printf("The last lenght is %dand j is %d\n", theLen, j);
		if (p[j - 1] == NULL)
			return (NULL);
		p[j][theLen] = '\0';
		for (int k = 0; k < theLen; k++)
			p[j - 1][k] = 1;

	}	
	return (Filling(p, str));
}
