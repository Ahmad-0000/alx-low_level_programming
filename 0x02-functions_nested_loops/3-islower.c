#include "main.h"
/*
 * _islower - does what it is supposed to do.
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
