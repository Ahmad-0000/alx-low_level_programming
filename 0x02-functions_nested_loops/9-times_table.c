#include <stdio.h>
#include "main.h"
int main()
{
	times_table();
}

void times_table(void)
{
	int i , n, r , a, b;
	
	i = 0;
	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			r = i * n;
			if (r > 9)
			{
				if (r % 10)
				{
					a = r / 10;
					b = r % 10;
					putchar(a + '0');
					putchar(b + 48);
					putchar(',');
					putchar(' ');
					n++;
				}
				else 
				{
					r = r / 10;
					putchar(r + 48);
					putchar('0');
					putchar(',');
					putchar(' ');
					n++;
				}
			}
			else
			{
				putchar(r + '0');
				putchar(',');
				putchar(' ');
				n++;
			}

		}	
		putchar('\n');
		i++;
	}
}
