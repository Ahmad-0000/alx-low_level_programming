#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - is a function to add a node at the end of a list
 *	of the type list_t
 * @h: is a pointer to a pointer to the first node in the list
 * @str: is a pointer to a string to be pointed to by the str in the last node
 * Return: is to return the address of the last element of the list
 */

list_t *add_node_end(list_t **h, const char *str)
{
	list_t *p, *fp;

	fp = *h;
	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->next = NULL;
	p->str = strdup(str);
	p->len = strlen(p->str);
	while (fp != NULL)
		fp = fp->next;
	fp = p;
	return (p);
}
