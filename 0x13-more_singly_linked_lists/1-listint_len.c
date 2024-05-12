#include "lists.h"

/**
 * listint_len - is a function to return the length of a list
 * @head: is a pointer to the first node in the list
 * Return: is to return the length of the list
 */

size_t listint_len(const listint_t *head)
{
	size_t length = 0;

	while (head)
	{
		length++;
		head = head->next;
	}
	return (length);
}
