#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - is a function
 * @h: is a pointer
 * @n: is an integer
 * Return: is to return a value
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *theNew = malloc(sizeof(listint_t));

	if (theNew == NULL)
		return (NULL);
	theNew->n = n;
	theNew->next = *h;
	*h = theNew;
	return (theNew);
}
