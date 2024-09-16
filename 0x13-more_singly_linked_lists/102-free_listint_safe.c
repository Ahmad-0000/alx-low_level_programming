#include "lists.h"

/**
 * free_listint_safe - is a function to free a list safely (including lists
 * with loops)
 * @h: is a pointer to the pointer to the first node in the list
 * Return: is to return the number of the nodes 
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes_num;
	listint_t *temp;
	tracklist_t *thead;
	int loop = 0;

	if (!h || !(*h))
		return (0);
	thead = malloc(sizeof(*thead));
	if (!thead)
		exit(1);
	thead->next = NULL;
	thead->ptr = *h;
	temp = *h;
	nodes_num = 0;
	while (*h)
	{
		nodes_num++;
		loop = checkloop(thead, (*h)->next);
		*h = (*h)->next;
		free(temp);
		if (loop)
		{
			freetracker(thead);
			*h = NULL;
			return (nodes_num);
		}
		temp = *h;
	}
	freetracker(thead);
	*h = NULL;
	return (nodes_num);
}
