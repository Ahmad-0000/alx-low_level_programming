#include "function_pointers.h"
/**
 * print_name - is a function to pass a pointer to a name
 *	to a function to handle it
 * @theName: is a pointer to the name
 * @f: is a pointer to the function
 */
void print_name(char *theName, void (*f)(char *))
{
	f(theName);
}
