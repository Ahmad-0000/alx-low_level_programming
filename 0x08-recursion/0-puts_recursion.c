#include "main.h"
/**
 * _putting - is a function to print a string using recursion.
 * @c: is a pointer to the string to be put.
 */
void _putting(char *c)
{
	if (*c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*c);
	_putting(c + 1);
}
