#include "lists.h"

/**
 * list_len - is a function to find the length of a singly linked list
 * @head: is a pointer to the first node in the list
 * Return: is to return the lenght of the list
 */

size_t list_len(const list_t *head)
{
	size_t length = 0;

	while (head != NULL)
	{
		length++;
		head = head->next;
	}
	return (length);
}
