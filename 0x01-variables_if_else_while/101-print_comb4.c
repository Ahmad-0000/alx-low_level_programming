#include <stdio.h>

/**
 * main - to print all possible smallest different combinations of three digits
 * Return: to return 0
*/

int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
