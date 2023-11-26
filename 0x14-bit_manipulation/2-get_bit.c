#include "main.h"

/**
 * get_bit - is a function
 * @n: is a number
 * @i: is an index
 * Return: is to return the value of the bit
 */

int get_bit(unsigned long int n, unsigned int i)
{
	if (i == 0)
		return (n & 1);
	return (get_bit(n >> 1, --i));
}
