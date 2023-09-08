#include <stdio.h>

/**
 * main - is main
 * Return: is return
*/
int main(void)
{
	char a = 'a';
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
		}
		else
		{
			A = a;
			putchar(A);
		}
	}
	putchar('\n');
	return (0);
}
