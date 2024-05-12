#include "lists.h"

/**
 * insert_nodeint_at_index - is a function to insert a node at the index @idx
 * @head: is a pointer to the first node of the list
 * @idx: is the index, starts at 0
 * @n: is the data part in the node
 * Return: is to return the address of the new node, or NULL when faliure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	ptr = *head;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (*head == NULL)
		{
			return (*head = new_node);
		}
		else
		{
			new_node->next = *head;
			return (*head = new_node);
		}
	}
	for (i = 1; ptr->next != NULL && i < idx; i++)
		ptr = ptr->next;
	if ((i > idx && (i - 1) == idx) || i == idx)
	{
		new_node->next = ptr->next;
		new_node->n = n;
		ptr->next = new_node;
		return (new_node);
	}
	return (NULL);
}
