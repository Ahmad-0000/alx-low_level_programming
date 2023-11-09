#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - is a function to print a numbers
 *	that are separated by a separator
 * @separator: is the separator
 * @n: is the number of the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (n == 0)
		exit(1);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf(i + 1 == n ? "%d\n" : "%d", va_arg(p, int));
		else
		{
			printf(i + 1 == n ? "%d\n" : "%d", va_arg(p, int));
			printf(i + 1 == n ? "" : "%s", separator);
		}
	}
	va_end(p);
}
