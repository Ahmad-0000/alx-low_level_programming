#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
struct options
{
	char c;
	void (*ptr)(va_list);
};
void ch(va_list p)
{
	printf("%c", va_arg(p, int));
}
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
void in(va_list p)
{
	printf("%d", va_arg(p, int));
}
void f(va_list p)
{
	printf("%f", va_arg(p, double));
}
void print_all(const char * const theFormat, ...)
{
	int i = 0, j;
	va_list p;
	char c;
	struct options a[] = {
		{'c', ch},
		{'f', f},
		{'i', in},
		{'s', s}
	};

	va_start(p, theFormat);
	while (theFormat[i] != '\0')
	{
		c = theFormat[i];
		j = 0;
		while (j < 4)
		{
			if (c == a[j].c)
			{
				a[j].ptr(p);
				if (theFormat[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

