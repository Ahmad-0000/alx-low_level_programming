#include "lists.h"


/**
 * find_listint_loop - is a function that finds a loop in a singly linked list
 * but the loop has to be less than 1000 nodes length
 * @head: is a pointer to the first node in the list
 * Return: is to return the address of the starting of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	int i;
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = head;
	head = head->next;
	if (ptr == head)
		return (ptr);
	i = 0;
	while (head)
	{
		if (i == 1000)
		{
			i = 0;
			ptr = ptr->next;
		}
		if (ptr == head)
			return (ptr);
		head = head->next;
		i++;
	}
	return (NULL);
}
