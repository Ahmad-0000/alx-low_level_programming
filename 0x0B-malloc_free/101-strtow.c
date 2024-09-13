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

void freeall(char **array, int size, int *lengths)
{
	int i = 0;

	while (i < size)
		free(array[i]);
	free(lengths);
	free(array);
}

char *ext(char *ps, int length, int *ps2)
{
	int i = 0;
	char *word;

	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	while (i < length)
	{
		word[i] = *ps;
		ps++;
		i++;
		(*ps2)++;
	}
	return (word);
}

char **strtow(char *str)
{
	int words, i, *lengths, j = 0;
	char **warray;

	if (!str || !(*str))
		return (NULL);
	words = WordsCounting(str);
	lengths = wlengths(str, words);
	warray = malloc(sizeof(char *) * (words + 1));
	if (!words || !lengths || !warray)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		warray[i] = malloc(sizeof(char *));
		if (!warray[i])
		{
			freeall(warray, i + 1, lengths);
			return (NULL);
		}
	}
	warray[i] = NULL;
	for (i = 0; str[i] == ' '; i++)
		;
	while (str[i])
		if (str[i] != ' ')
		{
			warray[j] = ext(&(str[i]), lengths[j], &i);
			if (!warray[j])
			{
				freeall(warray, words, lengths);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	free(lengths);
	return (warray);
}
