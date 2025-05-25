#include "lists.h"

/**
 * add_nodeint - is a function to add a node at the beginning of a list
 * @head: is a pointer to a pointer to the first node in the list
 * @n: is an integer to be added in the new node
 * Return: is to return the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
