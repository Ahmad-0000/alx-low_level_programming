#include "main.h"

/**
 * _isdigit - is a function to check if @c is a digit or not in ascii
 * @c: is the parameter to check
 * Return: is to return 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
