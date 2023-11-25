#include "lists.h"

/**
 * sum_listint - is a function to sum a list
 * @h: is a pointer
 * Return: is to return the result of the sum
 */

int sum_listint(listint_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		s += h->n;
		h = h->next;
	}
	return (s);
}
