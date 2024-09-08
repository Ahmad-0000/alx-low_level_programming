#include "main.h"

/**
 * print_rev - is a function to print a string in reverse
 * @s: is a pointer to a string
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
