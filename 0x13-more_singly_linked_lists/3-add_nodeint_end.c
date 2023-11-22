#include "lists.h"

/**
 * add_nodeint_end - is a function
 * @h: is a pointer
 * @n: is an integer
 * Return: is to return a value
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *theLast = malloc(sizeof(listint_t));
	listint_t *tmp = *h;

	if (theLast == NULL)
		return (NULL);
	theLast->n = n;
	theLast->next = NULL;
	if (*h == NULL)
	{
		*h = theLast;
		return (theLast);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = theLast;
	return (theLast);
}
