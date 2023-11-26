#include "main.h"

/**
 * clear_bit - is a function to remove a bit at a given index (i)
 * @n: is a pointer
 * @i: is an index
 * Return: is to return 1 when success, or -1 when faliure
 */

int clear_bit(unsigned long int *n, unsigned int i)
{
	if ((i + 1) > (sizeof(*n) * 8))
		return (-1);
	if (isNotZero(*n, i))
		*n -= powers(2, i);
	return (1);
}

/**
 * isNotZero - is a function to detect if a bit is one or not
 * @n: is a number
 * @i: is an index
 * Return: is tor return 1 when it's one, otherwise 0
 */

int isNotZero(unsigned long int n, unsigned int i)
{
	if (i == 0)
	{
		if (n & 1)
			return (1);
		return (0);
	}
	return (isNotZero(n >> 1, --i));
}

/**
 * powers - is a function
 * @theBase: is the base
 * @thePower: is the power
 * Return: is to return the result
 */

unsigned int powers(unsigned int theBase, unsigned int thePower)
{
	unsigned int theResult = theBase, i;

	if (thePower == 0)
		return (1);
	for (i = 1; i < thePower; i++)
		theResult = theResult * theBase;
	return (theResult);
}
