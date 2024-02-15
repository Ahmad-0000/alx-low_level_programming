#include "lists.h"

/**
 * dlistint_len - is a function to find the length of a doubly linked list
 * @h: is a pointer to the first node in the list
 * Return: is to return the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
