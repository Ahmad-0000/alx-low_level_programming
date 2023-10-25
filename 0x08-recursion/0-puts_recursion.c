#include "main.h"
/**
 * _puts_recursion - is a function to print a string using recursion.
 * @c: is a pointer to the string to be put.
 */
void _puts_recursion(char *c)
{
	if (*c == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*c);
	_puts_recursion(c + 1);
}
