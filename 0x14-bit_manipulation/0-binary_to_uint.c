#include "main.h"

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

/**
 * binary_to_uint - is a function
 * @b: is a pointer to a string
 * Return: is to return the result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, thePower = 0;
	int j;

	if (b == NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
		if (!(b[j] == '1' || b[j] == '0'))
			return (0);
	j--;
	for (; j >= 0; j--)
	{
		i += b[j] == '0' ? 0 :  powers(2, thePower);
		thePower++;
	}
	return (i);
}
