#include "lists.h"

/**
 * free_dlistint - is a function to free a doubly lined list.
 * @head: is a pointer to the first node in the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
