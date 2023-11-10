#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * ch - is to process characters
 * @p: is to pull the argument
 */
void ch(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
 * s - is to process strings
 * @p: is to pull the argument
 */
void s(va_list p)
{
	char *a = va_arg(p, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}
/**
 * in - is to process integers
 * @p: is to pull the argument
 */
void in(va_list p)
{
	printf("%d", va_arg(p, int));
}
/**
 * f - is to process floats
 * @p: is to pull the argument
 */
void f(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 * print_all - is a function to print any arguments
 *	belong either to char or int or float or string.
 * @theFormat: is a string that contains flags
 */
void print_all(const char * const theFormat, ...)
{
	int i = 0, j;
	va_list p;
	char c;
	char *theComma = "";
	opt a[] = {
		{'c', ch},
		{'f', f},
		{'i', in},
		{'s', s}
	};
	va_start(p, theFormat);
	while (theFormat != NULL && theFormat[i] != '\0')
	{
		c = theFormat[i];
		j = 0;
		while (j < 4)
		{
			if (c == a[j].c)
			{
				printf("%s", theComma);
				a[j].ptr(p);
				theComma = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
