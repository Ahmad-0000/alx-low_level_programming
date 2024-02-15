#include "lists.h"

/**
 * sum_dlistint - is a function to sum the integer part of the nodes of
 *	a doubly linked list.
 * @head: is a poniter to the first node in the list.
 * Return: is to return the total
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
