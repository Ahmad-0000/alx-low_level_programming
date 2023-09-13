#include "main.h"

int _islower(int c)
{
	int r = c;
	_putchar(r + '0');
	if (("%d", c) < 97  || ("%d", c) > 122)
		return (0);
	else
		return (1);
}
