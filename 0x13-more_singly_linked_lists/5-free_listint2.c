#include "lists.h"

/**
 * free_listint2 - is a function
 * @h: is a pointer
 */

void free_listint2(listint_t **h)
{
	listint_t *tmp = *h;

	while (*h != NULL && h != NULL)
	{
		*h = (*h)->next;
		free(tmp);
		tmp = *h;
	}
	h = NULL;
}
