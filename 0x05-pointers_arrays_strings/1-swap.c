#include "main.h"
/**
 * swap_int - is a function
 * @a: is the first int
 * @b: is the second int
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
