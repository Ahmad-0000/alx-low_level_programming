#include "main.h"
/**
 * _isalpha - is a function to determine whether a character is alphabet or not
 * @c: is the letter to check.
 * Return: is to return 1 when yes, or 0 when no
 */
int _isalpha(int c)
{
	if (c < 65 || c > 122 || c == 91 ||
	c == 92 || c == 93 || c == 94 || c == 95 || c == 96)
		return (0);
	else
		return (1);
}
