#include "lists.h"

/*****
 * delete_dnodeint_at_index - is a function to delete a node from a doubly
 *	linked list at the index-th postion (index starts at 0).
 * @head: is a pointer to a pointer to the first node in the list.
 * @index: is the disred index.
 * Return: is to return 1 when success, otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	for (i = 0; i < index && temp; i++)
		temp = temp->next;
	if (i != index || !temp)
		return (-1);
	if (temp == *head)
	{
		if (!temp->next)
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
