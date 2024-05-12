#include <stdio.h>
#include "lists.h"

/**
 * print_list - is a function to print the contnet of a singly linked list
 *	of the type (list_t)
 * @head: is a pointer to the first node in the list
 * Return: is to return the number of the nodes
 */

size_t print_list(const list_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		i++;
	}
	return (i);
}
