#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - is a function to add a node at the end of a list
 *	of the type "list_t"
 * @head: is a pointer to a pointer to the first node in the list
 * @str: is a pointer to a string to be added in the new node
 * Return: is to return the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	temp = *head;
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->str = (str == NULL ? NULL : strdup(str));
	while (new_node->str != NULL && new_node->str[length] != '\0')
		length++;
	new_node->len = length;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
