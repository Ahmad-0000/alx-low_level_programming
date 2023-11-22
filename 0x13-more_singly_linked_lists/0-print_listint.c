#include <stdio.h>
#include "lists.h"
/**
 * print_listint - is a function
 * @h: is a pointer
 * Return: is to return a value
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return ((unsigned int)i);
}
