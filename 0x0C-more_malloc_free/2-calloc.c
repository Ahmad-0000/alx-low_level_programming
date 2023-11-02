#include <stdlib.h>

/**
 * _calloc - is a function to allocate an array
 *	of (nmemb) elemnts and each is of size (size).
 * @nmemb: is the number of the array members
 * @size: is the size of each element
 *
 * Return: is to return a pointer to the array,
 *	of NULL if (nmemb) or (size) is 0, or faliure.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; (unsigned int)i < nmemb * size; i++)
		p[i] = 0;
	return (ptr);
}
