#include "lists.h"

/**
 * get_nodeint_at_index - is a function
 * @h: is a pointer
 * @i: is an integer
 * Return: is to return a value
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int i)
{
	unsigned int j;

	if (h != NULL)
	{
		for (j = 1; j <= i && h->next != NULL; j++)
			h = h->next;
		if (j > i)
			return (h);
	}
	return (NULL);
}
