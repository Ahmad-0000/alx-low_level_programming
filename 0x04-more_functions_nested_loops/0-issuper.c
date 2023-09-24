#include "main.h"
/**
 * _isupper - is a function to determine whether a letter is uppercase or no
 * @c: is the letter to check
 * Return: is to return 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
