#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - is a function to print a variable number of strings
 * @separator: is a separator to separate the strings
 * @n: is the number of the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	va_start(p, n);
	if (n == 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (separator == NULL)
		{
			if (s == NULL)
				printf(i + 1 == n ? "(nil)\n" : "(nil)");
			else
				printf(i + 1 == n ? "%s\n" : "%s", s);
		}
		else
		{
			if (s == NULL)
			{
				printf(i + 1 == n ? "(nil)\n" : "(nil)");
				printf(i + 1 == n ? "" : "%s", separator);
			}
			else
			{
				printf(i + 1 == n ? "%s\n" : "%s", s);
				printf(i + 1 == n ? "" : "%s", separator);
			}
		}
	}
	va_end(p);
}
