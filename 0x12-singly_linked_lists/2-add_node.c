#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - is a function to add a node at the beginning
 *	of the list_t list
 * @h: is a pointer to a pointer to the first node of the list
 * @str: is the string to be pointed to by the str pointer int the node
 * Return: is to return the address of the new node
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *p;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	if (str == NULL)
		p->str = NULL;
	else
		p->str = strdup(str);
	while (str != NULL && str[i] != '\0')
		i++;
	p->len = i;
	p->next = *h;
	*h = p;
	return (*h);
}
