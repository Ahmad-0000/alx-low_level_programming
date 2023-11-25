#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - is a function to delete a node the index i
 *	(starting from 0)
 * @h: is a pointer to a pointer to the node
 * @i: is the index
 * Return: is to return 1 when success, or 0 when faliure
 */
int delete_nodeint_at_index(listint_t **h, unsigned int i)
{
	unsigned int j;
	listint_t *p, *tmp;

	if (h == NULL || *h == NULL)
		return (-1);
	p = *h;
	tmp = p;
	if (i == 0)
	{
		*h = (*h)->next;
		free(tmp);
		return (1);
	}
	for (j = 1; p != NULL && j < i; j++)
		p = p->next;
	if (j > i - 1)
	{
		tmp = p->next;
		p->next = p->next->next;
		free(tmp);
	}
	return (1);
}
