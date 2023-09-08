#include <stdio.h>

/**
 * main - is main
 * Return: is return
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 0; b <= 8; b++)
	{
		putchar(' ,');
	}
	putchar('\n');
	return (0);
}
