#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - a function to free a list and set its header pointer to NULL
 * @head: is a pointer to a pointer to the first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *back;
	listint_t *front;

	if (!head)
		return;
	front = back = *head;
	while (front)
	{
		front = front->next;
		free(back);
		back = front;
	}
	*head = NULL;
}
