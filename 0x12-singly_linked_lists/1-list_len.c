#include "lists.h"

/**
 * list_len - is a function to find the length of a list
 * @h: is a pointer to the first node in the list
 * Return: is to return the lenght of the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
