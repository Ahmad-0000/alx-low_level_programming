#include "main.h"
#include <stdio.h>

int main()
{
	char *a = "hello world";
	char *b = "world";

	_strpbrk(a, b);
}
char *_strpbrk(char *s, char *accept)
{
	int j, n;

	j = 0;
	while (s[j] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (s[j] != accept[n])
			{
				n++;
			}
			else
			{
				
			}
		}
		
}
