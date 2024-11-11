#include "lists.h"

/******
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
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (h == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = *h;
	for (i = 0; i < idx && temp; i++)
		temp = temp->next;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	if (i != idx)
	{
		free(new_node);
		return NULL;
	}
	if (!temp)
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		return new_node;
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = new_node;
	temp->prev = new_node;
	return new_node;
}
