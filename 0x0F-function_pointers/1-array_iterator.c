#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - is a function to do implement a function
 *	on every element of an array of integers
 * @theArray: is a pointer to the array of integers
 * @theSize: is the size of the array
 * @action: is the function to be implemented
 */
void array_iterator(int *theArray, size_t theSize, void (*action)(int))
{
	unsigned long int i;

	if (theArray == NULL || theSize == 0 || action == NULL)
		exit(1);
	for (i = 0; i < theSize; i++)
		action(theArray[i]);
}
