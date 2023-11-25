#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - is a function
 * @h: is a pointer to the head
 * @idx: is the index
 * @n: is the data part in the node
 * Return: is to return the address of the new node, or NULL when faliure
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p;
	listint_t *theNode;

	if (h == NULL)
		return (NULL);
	p = *h;
	theNode = malloc(sizeof(listint_t));
	if (theNode == NULL)
		return (NULL);
	theNode->n = n;
	theNode->next = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			return (*h = theNode);
		}
		else
		{
			theNode->next = *h;
			return (*h = theNode);
		}
	}
	for (i = 1; p->next != NULL && i < idx; i++)
		p = p->next;
	if ((i > idx && (i - 1) == idx) || i == idx)
	{
		theNode->next = p->next;
		theNode->n = n;
		p->next = theNode;
		return (theNode);
	}
	return (NULL);
}
