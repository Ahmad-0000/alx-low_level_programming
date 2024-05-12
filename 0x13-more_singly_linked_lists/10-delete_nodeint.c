#include "lists.h"

/**
 * delete_nodeint_at_index - is a function to delete a node at the index @index
 * @head: is a pointer to a pointer to the first node in the list
 * @index: is the index
 * Return: is to return 1 when success, or -1 when faliure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *traveller, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	traveller = *head;
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (j = 1; traveller != NULL && j < index; j++)
		traveller = traveller->next;
	if (j > index - 1)
	{
		temp = traveller->next;
		traveller->next = traveller->next->next;
		free(temp);
		return (1);
	}
	return (-1);
}
