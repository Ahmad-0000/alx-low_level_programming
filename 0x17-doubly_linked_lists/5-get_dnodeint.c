#include "lists.h"

/**
 * get_dnodeint_at_index - is a funcion to get the address of the n-th node
 *	of a doubly linked list (n starts at 0).
 * @head: is a pointer to the first node in the list.
 * @index: is the index of the disired node.
 * Return: is to return teh address of the desired node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return NULL;
	for (i = 0; i < index && head->next != NULL; i++)
		head = head->next;
	if (i != index)
		return (NULL);
	return (head);
}
