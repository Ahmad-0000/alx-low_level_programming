#include "main.h"

/**
 * puts2 - is a function to print every other character of a string, starting
 * from the first one, followed by a newline
 * @str: is a pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (!str[i] || !str[i + 1])
		{
			_putchar('\n');
			return;
		}
		i += 2;
	}
	_putchar('\n');
}
