#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - is a function to print a singly linked list
 * @head: is a pointer to the first node in the list
 * Return: is to return the length of the linked list
 */

size_t print_listint(const listint_t *head)
{
	size_t length = 0;

	if (!head)
		return (0);
	while (head)
	{
		printf("%d\n", head->n);
		length++;
		head = head->next;
	}
	return (length);
}
