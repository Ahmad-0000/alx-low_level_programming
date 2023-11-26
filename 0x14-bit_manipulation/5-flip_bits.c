#include "main.h"

/**
 * flip_bits - is a function to determine the number of bits to be flipped
 *	so that n and m are equal
 * @n: is a number
 * @m: is anoter number
 * Return: is to return the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
