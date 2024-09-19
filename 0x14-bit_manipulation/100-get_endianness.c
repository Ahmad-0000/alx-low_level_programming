#include "main.h"

/**
 * get_endiannes - is a function to determine the endianness of a CPU
 * Return: is to return 1 if little, 0 if big
 */

int get_endianness(void)
{
	u.data = 1025;

	if (u.s.b == 1)
		return (1);
	return (0);
}
