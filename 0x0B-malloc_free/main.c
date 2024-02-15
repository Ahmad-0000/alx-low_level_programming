#include <stdio.h>
#include "main.h"
#include <stdlib.h>
void pp(char **p)
{
	int i;

	for (i = 0; p[i] != NULL; i++)
		printf("%s\n", p[i]);
}
int main(){
	char **p;
	p = strtow("     ahmad husian");
	if (p == NULL)
	{
		printf("Failed\n");
		return 1;
	}
	pp(p);
	free(p);
}
