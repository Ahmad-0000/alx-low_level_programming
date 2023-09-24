#include "main.h"
/**
 * print_most_numbers - is a function to print 8 numbers
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			putchar(i + 48);
			i++;
		}
	}
	putchar('\n');
}
