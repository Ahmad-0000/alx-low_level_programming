#include "main.h"
/**
 * print_alphabet - is a function to print alphabet in lowercase
 */
void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
