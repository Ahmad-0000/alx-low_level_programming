#include "lists.h"

/**
 * pop_listint - is a function
 * @h: is a pointer
 * Return: is to return a value
 */

int pop_listint(listint_t **h)
{
	int n;
	listint_t *tmp = *h;

	if (*h != NULL)
	{
		n = (*h)->n;
		*h = (*h)->next;
		free(tmp);
		return (n);
	}
	return (0);
}
