#include "main.h"
int _abs(int i)
{
	if (i < 0)
	{
		int r = -i;
		_putchar(r + '0');
	}
	else
	{
		_putchar(i + '0');
	}

}
