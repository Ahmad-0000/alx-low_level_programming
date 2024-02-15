#include "lists.h"

/**
 * print_dlistint - is a function to print the content of a doubly linked list
 * @h: is a pointer to the first node in the list
 * Return: is to return the number of the nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
