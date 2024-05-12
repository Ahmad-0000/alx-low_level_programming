#include "lists.h"

/**
 * add_nodeint_end - is a function to add a node in the end of a list
 * @head: is a pointer to a pointer to the first node in the list
 * @n: is an integer
 * Return: is to return a pointer to the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *temp;

	last_node = malloc(sizeof(*last_node));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = last_node;
	return (last_node);
}
