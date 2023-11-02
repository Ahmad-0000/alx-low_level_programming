#include <stdlib.h>
/**
 * malloc_checked - is a function to allocate memory
 *	dynamically, in faliure exiting with 98
 * @b: is the amount of the allocated memory
 * Return: is to return an address to the allocated
 *	memory when success.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
