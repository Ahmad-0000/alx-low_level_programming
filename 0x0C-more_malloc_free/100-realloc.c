#include <stdlib.h>
/**
 * _realloc - is a function like the standard
 *	function realloc.
 * @ptr: is a pointer to the previously allocated
 *	memory.
 * @theOldSize: is the size in bytes of the previously
 *	allocated memory.
 * @theNewSize: is the new size to be allocated
 *
 * Return: is to return a pointer as illustrated in the
 *	code below
 */
void *_realloc(void *ptr, unsigned int theOldSize, unsigned int theNewSize)
{
	char *p, *pp = ptr;
	int i, theLim = theOldSize;

	if (ptr == NULL)
		return (malloc(theNewSize));
	if (theNewSize == theOldSize)
		return (ptr);
	if (ptr != NULL && theNewSize == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(theNewSize);
	if (p == NULL)
		return (NULL);
	if (theNewSize < theOldSize)
		theLim = theNewSize;
	for (i = 0; i < theLim; i++)
		p[i] = pp[i];
	ptr = p;
	return (ptr);
}
