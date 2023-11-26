#include "main.h"

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
