#include <stdio.h>

/**
 * main - is main
 * Return: is return
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
