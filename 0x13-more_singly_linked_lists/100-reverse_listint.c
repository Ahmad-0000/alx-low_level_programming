#include "lists.h"

/**
 * reverse_listint - is a function to reverse a singly linked list
 * @head: a pointer to a pointer to the first node in the list
 * Return: is to a pointer to the first node in the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *second, *third; /* *head is first */

	if (!head || !(*head))
		return (NULL);
	second = (*head)->next;
	if (!second)
		return (*head);
	if (second->next)
	{
		third = second->next;
	}
	else
	{
		second->next = *head;
		(*head)->next = NULL;
		return (second);
	}
	(*head)->next = NULL;
	while (third)
	{
		second->next = *head;
		*head = second;
		second = third;
		third = third->next;
	}
	second->next = *head;
	*head = second;
	return (*head);
}
