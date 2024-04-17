#include "main.h"

/**
 * times_table - is a function to print the time tables
 * of 0 through 9, strating the multiplication from 0
 * and ending in 9
 */
void times_table(void)
{
	char i = 0;
	char j = 0;
	char result;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(j == 9 ? '\n' : ',');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
				_putchar(j == 9 ? '\n' : ',');
			}
			j++;
		}
		i++;
	}
}
