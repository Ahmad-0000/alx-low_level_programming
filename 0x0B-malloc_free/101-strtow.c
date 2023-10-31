#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * myFun - is a function to fill the 2D array that was
 *	allocated dynamically using malloc with the correct
 *	order of the characters
 * @p: is a double pointer to the 2D array
 * @str: is the string to be cut
 * @theWords: is the number of the words to be filled in
 *	the array (the last one is a NULL pointer)
 * @maxLen: is the length of the longest word in the array
 *	(the trailing 1 is due to the null terminator)
 * Return: is to return a double pointer to the filled 2D array
 */
char **myFun(char **p, char *str, int theWords, int maxLen)
{
	int i, j, c = 0, inWord = 0;

	for (i = 0; p[i] != NULL ; i++)
	{
		for (j = 0; j < (maxLen) ; c++)
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
	int i, inWord = 0, theWords = 0, j, maxLen = 0, theLen = 0;

	if (str == NULL || *str == '\0' || *str == ' ')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && inWord == 0)
		{
			inWord = 1;
			theWords++;
		}
		else if (str[i] == '\t' || str[i] == ' ')
		{
			inWord = 0;
			theLen = 0;
		}
		if (inWord == 1)
			theLen++;
		if (theLen > maxLen)
			maxLen = theLen;
	}
	theWords++;
	maxLen++;
	p = (char **)malloc(sizeof(char *) * theWords);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < theWords; j++)
	{
		p[j] = j + 1 == theWords ? NULL : (char *)malloc(sizeof(char) * maxLen);
		if (p[j] == NULL && (j + 1 != theWords))
			return (NULL);
	}
	return (myFun(p, str, theWords, maxLen));
}
