#include <stdlib.h>
#include "lists.h"

/**
 * free_list - is a function to free a list
 * @h: is a pointer to the first node in the list
 */

void free_list(list_t *h)
{
	list_t *p = h;

	while (h != NULL)
	{
		h = h->next;
		free(p);
		p = h;
	}
}
