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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		p->str = NULL;
	else
		p->str = strdup(str);
	while (str != NULL && str[i] != '\0')
		i++;
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
