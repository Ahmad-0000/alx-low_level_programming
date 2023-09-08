#include <stdio.h>

/**
 * main - is main
 * Return: is return
*/
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
