#include "main.h"

/**
 * set_string - is a function to change a set a pointer to a new string
 * @s: a double pointer to the string
 * @to: the destination string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
