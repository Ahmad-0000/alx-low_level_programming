#include "lists.h"

/**
 * sum_listint - is a function to sum a list
 * @head: is a pointer to the first node in the list
 * Return: is to return the result of the sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
