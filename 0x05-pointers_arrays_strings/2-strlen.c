#include "main.h"
/**
 * _strlen - is a function
 * @s: is a pointer
 * Return: is a return
 */
int _strlen(char *s)
{
	int i;	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
