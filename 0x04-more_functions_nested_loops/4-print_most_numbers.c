#include "main.h"
/**
 * print_most_numbers - is a function to print 8 numbers
 */
void printing(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + 48);
	}
	_putchar('\n');
}
