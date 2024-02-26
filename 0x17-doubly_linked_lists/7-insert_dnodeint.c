#include "lists.h"

/**
 * insert_dnodeint_at_index - is a function to insert a node in a doubly linked
 *	list at the idx-th position (idx starts at 0).
 * @h: is a pointer to a pointer to the first node in the list.
 * @idx: is the disred index.
 * @n: is an integer to be stored in the new node.
 * Return: is to return the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(*new_node));
	if (h == NULL || *h == NULL || new_node == NULL)
		return (NULL);
	temp = *h;
	for (i = 1; i < idx && temp->next != NULL; i++)
		temp = temp->next;
	if (i != idx)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		(*h)->next = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}