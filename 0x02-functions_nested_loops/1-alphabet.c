#include <stdio.h>
#include "main.h"

int main(void)
{
	printing_alphabet();
	return (0);
}

void printing_alphabet(void)
{	
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
