#include "function_pointers.h"
/**
 * int_index - is a function to search for an integer
 * @theArray: is the array to search for the integer in
 * @theSize: is the size of the array
 * @cmp: is a pointer to a function to compare the values
 *	in theArray, or as the programmer decide
 * Return: is to return the index of the wanted integer,
 *	or -1 if it is not found or the size of the array is 0 or less
 */
int int_index(int *theArray, int theSize, int (*cmp)(int))
{
	int i;

	if (theArray == 0 || theSize == 0 || cmp == 0)
		exit(1);
	if (theSize <= 0)
		return (-1);
	for (i = 0; i < theSize; i++)
		if (cmp(theArray[i]))
			return (i);
	return (-1);
}
