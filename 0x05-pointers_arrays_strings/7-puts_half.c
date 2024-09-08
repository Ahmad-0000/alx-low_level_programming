#include "main.h"

/**
 * puts_half - is a function to print the last half of a string
 * @str: is a pointer to the string
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		i /= 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = i / 2 + 1;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
