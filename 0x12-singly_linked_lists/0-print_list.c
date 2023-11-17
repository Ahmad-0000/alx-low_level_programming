#include <stdio.h>
#include "lists.h"
/**
 * print_list - is a function to print the contnet of a singly linked list
 *	of the type (list_t)
 * @h: is a pointer to the first node in the list
 * Return: is to return the number of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
