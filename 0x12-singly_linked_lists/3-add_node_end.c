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
	unsigned int i = 0;

	fp = *h;
	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->next = NULL;
	p->str = ((str == NULL) ? NULL : strdup(str));
	while (p->str != NULL && p->str[i] != '\0')
		i++;
	p->len = i;
	if (fp == NULL)
	{
		*h = p;
	}
	else
	{
		while (fp->next != NULL)
			fp = fp->next;
		fp->next = p;
	}
	return (p);
}
