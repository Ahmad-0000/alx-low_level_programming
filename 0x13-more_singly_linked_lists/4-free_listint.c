#include "lists.h"

/**
 * free_listint - is a function to free a list
 * @head: is a pointer to the first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *back;
	listint_t *front;

	back = front = head;
	while (front)
	{
		front = front->next;
		free(back);
		back = front;
	}
}
