#include "lists.h"

/**
 * listint_len - is a function
 * @h: is a pointer
 * Return: is to return a value
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return ((unsigned int)i);
}
