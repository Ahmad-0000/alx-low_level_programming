#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - is a function to sum a varibale
 *	number of arguments
 * @n: is the number of the optional arguments
 * Return: is to return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int i, s = 0;

	va_start(p, n);
	i = 0;
	for (i = 0; (unsigned int)i < n; i++)
		s += va_arg(p, int);
	return (s);
}
