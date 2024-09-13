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


int *wlengths(char *str, int words)
{
	int *lengths;
	int i, j;

	if (!words)
		return (NULL);
	lengths = malloc(sizeof(int) * words);
	if (!lengths)
		return (NULL);
	for (i = 0; i < words; i++)
		lengths[i] = 0;
	for (i = 0; str[i] == ' '; i++)
		;
	j = 0;
	for (; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			lengths[j]++;
		}
		else
		{
			for (; str[i] == ' '; i++)
				;
			i--;
			j++;
		}
	}
	return (lengths);
}

void freeall(char **array, int size)
{
	int i = 0;

	while (i < size)
		free(array[i]);
	free(array);
}

char *ext(char *ps, int *ps2)
{
	int i, length;
	char *word;

	for (length = 0; *ps != ' ' && *ps != '\0'; length++)
		ps++;
	for (i = 0; i < length; i++)
		ps--;
	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = *ps;
		ps++;
		i++;
		(*ps2)++;
	}
	word[i] = '\0';
	return (word);
}

char **strtow(char *str)
{
	int words, i, j;
	char **warray;

	if (!str || !(*str))
		return (NULL);
	words = WordsCounting(str);
	if (!words)
		return (NULL);
	warray = malloc(sizeof(char *) * (words + 1));
	if (!warray)
		return (NULL);
	for (i = 0; i < words + 1; i++)
		warray[i] = NULL;
	for (i = 0; str[i] == ' '; i++)
		;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			warray[j] = ext(str + i, &i);
			if (!warray[j])
			{
				freeall(warray, words);
				return (NULL);
			}
			j++;
		}
		else
		{
			i++;
		}
	}
	return (warray);
}
