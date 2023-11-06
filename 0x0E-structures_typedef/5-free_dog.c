#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - is a function to free a memory that is ocuppied
 *	by *d
 * @d: is a pointer to the memory
 */
void free_dog(dog_t *d)
{
	free(d);
}
