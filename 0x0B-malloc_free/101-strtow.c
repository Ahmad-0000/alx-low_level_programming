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

char *ext(char *ps, int length, int *ps2)
{
	int i = 0;
	char *word;

	word = malloc(sizeof(*ps) * (length + 1));
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
	char *a, **warray;

	if (!str || !(*str))
		return (NULL);
	words = WordsCounting(str);
	a = malloc(sizeof(char *) * (words + 1));
	lengths = wlengths(str, words);
	warray = malloc(sizeof(char *) * (words + 1));
	if (!a || !lengths || !warray)
	{
		free(a);
		free(lengths);
		free(warray);
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		warray[i] = malloc(sizeof(char *));
		if (!warray[i])
		{
			freeall(warray, i + 1);
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
			j++;
		}
		else
			i++;
	free(a);
	free(lengths);
	return (warray);
}
