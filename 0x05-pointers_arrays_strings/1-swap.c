#include "main.h"

/**
 * swap_int - is a function to swap the values of two integers
 * @a: is the first int pointer
 * @b: is the second int pointer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
