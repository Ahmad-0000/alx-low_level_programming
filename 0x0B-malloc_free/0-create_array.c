#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int theSize, char c)
{
	char *s;
	unsigned int i;

	if (theSize == 0)
		return (NULL);
	s = (char *)malloc(sizeof(char) * theSize);
	for (i = 0; i < theSize - 1; i++)
		s[i] = c;
	s[theSize - 1] = '\0';
	return (s);
}
