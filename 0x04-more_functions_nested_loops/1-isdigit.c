#include "main.h"
/**
 * _isdigit - is a function
 * Return: is the function value
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
