#include "lists.h"

/**
 * get_nodeint_at_index - a function to return a pointer to the node at @index
 * @head: is a pointer to the first node in the list
 * @index: is the index of the node
 * Return: is to return a pointer to the node, otherwise, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int temp;

	if (head)
	{
		for (temp = 1; temp <= index && head->next; temp++)
			head = head->next;
		if (temp > index)
			return (head);
	}
	return (NULL);
}
