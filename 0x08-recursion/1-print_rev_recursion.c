/**
 * _print_rev_recursion - is a function to print a string in reverse
 * using recursion.
 * @s: is a pointer to the string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}