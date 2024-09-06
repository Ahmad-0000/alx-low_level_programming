#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits
 * Return: to return 0
*/

int main(void)
{
	int a;
	int b;

	a = 0;
	while (a < 9)
	{	
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}	
		a++;
	}
	putchar('\n');
	return (0);
}
