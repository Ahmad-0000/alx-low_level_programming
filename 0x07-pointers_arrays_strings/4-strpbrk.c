#include "main.h"
#include <stdio.h>

int main()
{
	char a[] = "hello world";
	char b[] = "world";

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
			if (s[j] == accept[n])
			{
				s[j + 1] = '\0';
				break;
			}
			else
			{
				n++;
			}
		}
		printf("j is %d\n", j);	
		j++;
	}
	n = 0;
	while (s[j] != '\0')
	{
		s[n] = s[j];
		j++;
		n++;
	}
	while (s[n] != '\0')
	{
		s[n] = '\0';
		n++;
	}
	printf("the new sentence is %s\n", s);
}
