#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - is a function to add a node at the beginning
 *	of a singly linked list
 * @head: is a pointer to a pointer to the first node in the list
 * @str: is the string to be added in the new node
 * Return: is to return the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int length = 0;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		ptr->str = NULL;
	else
		ptr->str = strdup(str);
	while (str != NULL && str[i] != '\0')
		length++;
	ptr->len = length;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
