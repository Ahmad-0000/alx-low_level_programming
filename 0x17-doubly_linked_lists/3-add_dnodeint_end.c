#include "lists.h"

/**
 * add_dnodeint_end - is a function to add a node at the end of a doubly
 *	linked list.
 * @head: is a pointer to a pointer to the first node of the list.
 * @n: is an integer to be stored in the node.
 * Return: is to return the address of the new added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
