#include "main.h"

/**
 * _isupper - is a function to determine @c is an uppercase letter or not
 * @c: is the letter to check
 * Return: is to return 1 if it's uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
