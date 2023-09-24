#include "main.h"
#include <stdio.h>
/**
 * rev_string - is a function to print a string in reverse
 * @s: a pointer to the string
 */
int main(void)
{
	char a[10] = "whoever";
	rev_string(a);
	printf("%s\n", a);
	return 0;
}
void rev_string(char *s)
{
	int i, n, f;

	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	n = 0;
	while (s[n] != '\0')
	{
		tmp = s[i];
		s[i] = s[n];
		s[n] = tmp;
		n++;
		i--;
	}
}
