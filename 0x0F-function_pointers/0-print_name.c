#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - is a function to pass a pointer to a name
 *	to a function to handle it
 * @name: is a pointer to the name
 * @f: is a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(1);
	f(name);
}
