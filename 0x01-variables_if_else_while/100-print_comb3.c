#include <stdio.h>

/**
 * main - is main
 * Return: is return
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
			putchar(',');
			putchar(' ');
			b++;
		}	
		a++;
	}
	putchar('\n');
}
