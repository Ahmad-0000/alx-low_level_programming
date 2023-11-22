#include "lists.h"

/**
 * free_listint - is a function
 * @h: is a pointer
 */

void free_listint(listint_t *h)
{
	listint_t *tmp = h;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			free(tmp);
			tmp = h;
		}
	}
}
