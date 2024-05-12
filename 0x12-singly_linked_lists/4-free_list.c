#include <stdlib.h>
#include "lists.h"

/**
 * free_list - is a function to free a single linked list
 * @head: is a pointer to the first node in the list
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = temp;
	}
}
