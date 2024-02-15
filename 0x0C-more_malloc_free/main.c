#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void s(char *b, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", b[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(NULL,sizeof(char) * 10, sizeof(char) * 15);
	i = 0;
	while (i < 10)
		p[i++] = 98;
	s(p, 15);
	free(p);
	return 0;
}
