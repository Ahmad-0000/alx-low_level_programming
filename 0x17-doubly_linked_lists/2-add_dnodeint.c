#include "lists.h"

/**
 * add_nodeint - is a function to add a node in the beginning of a doubly
 *	linked list.
 * @head: is a pointer to a pointer to the first node in the list.
 * @n: is an integer to be stored in the node.
 * Return: is to return the address of the new added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (head == NULL || new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
