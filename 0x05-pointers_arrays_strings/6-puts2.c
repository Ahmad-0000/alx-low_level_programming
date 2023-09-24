#include "main.h"
/**
 * puts2 - is a function
 * @str: is a pointer
 */
void puts2(char *str)
{
	int i, n, tmp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	n = 0;
	while (str[n] != '\0')
	{
		tmp = str[n];
		_putchar(tmp);
		n += 2;
	}
	_putchar('\n');
}
