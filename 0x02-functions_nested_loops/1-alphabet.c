#include <stdio.h>
#include "main.h"

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{	
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
