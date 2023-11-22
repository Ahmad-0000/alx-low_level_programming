#include "lists.h"

/**
 * free_listint2 - is a function
 * @h: is a pointer
 */

void free_listint2(listint_t **h)
{
	listint_t *tmp = *h;

	if (*h != NULL)
	{
		while ((*h)->next != NULL)
		{
			*h = (*h)->next;
			free(tmp);
			tmp = *h;
		}
		free(tmp);
	}
	*h = NULL;
}
