#include "main.h"
/**
 * print_rev - is my function
 * @s: is a pointer
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != s[0])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(s[0]);
	_putchar('\n');
}
