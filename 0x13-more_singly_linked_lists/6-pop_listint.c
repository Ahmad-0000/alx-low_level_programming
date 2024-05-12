#include "lists.h"

/**
 * pop_listint - is a function to delete the last element of the list
 * @head: is a pointer to a pointer to the first node in the list
 * Return: is to return the number that was stored in the popped node
 * 	or 0 if no such node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head)
		return (0);
	temp = *head;
	if (*head)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (n);
	}
	return (0);
}
