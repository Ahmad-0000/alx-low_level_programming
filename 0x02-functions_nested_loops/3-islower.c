#include "main.h"
/**
 * _islower - is a function to determine whether a letter is a lowercase or no
 * @c: is the decimal value of the letter
 * Return: is to return 1 when yes or 0 when no
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
