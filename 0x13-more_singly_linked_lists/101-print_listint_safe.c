#include "lists.h"
#include <stdio.h>

/**
 * struct tracker - a singly linked list to track addresses of nodes in
 * a listint_t list
 * @ptr: a node in listint_t list address
 * @next: to point to the next node in tracklist_t
 */

typedef struct tracker {
	const listint_t *ptr;
	struct tracker *next;
} tracklist_t;

/**
 * freetracker - is a function to free a list of type tracklist_t
 * @head: is a pointer to the first node in the list
 */

void freetracker(tracklist_t *head)
{
	tracklist_t *temp;
	if (!head)
		return;
	temp = head;
	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

/**
 * checkloop - is a function to check if there is a loop in a list of type
 * listint_t
 * @head: is pointer to the first node in the tracklist_t list
 * @ptr: is a pointer to the current node in listint_t
 * Return: is to return 1 if there is a loop so far, 0 otherwise
 */

int checkloop(tracklist_t *head, const listint_t *ptr)
{
	tracklist_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (head->next)
	{
		if (head->ptr == ptr)
			return (1);
		head = head->next;
	}
	if (head->ptr == ptr)
		return (1);
	head->next = malloc(sizeof(*head));
	if (!(head->next))
	{
		freetracker(temp);
		exit(98);
	}
	head->next->next = NULL;
	head->next->ptr = ptr;
	return (0);
}

/**
 * print_listint_safe - is a function to print a singly linked list with loop
 * detection
 * @head: is a pointer to the first node in the list
 * Return: is to return the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t loop, nodes_num = 0;
	tracklist_t *thead;

	if (!head)
		return (nodes_num);
	thead = malloc(sizeof(*thead));
	if (!thead)
		exit(98);
	thead->next = NULL;
	thead->ptr = NULL;
	nodes_num = 0;
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		loop = checkloop(thead, head);
		if (loop)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			freetracker(thead);
			return (nodes_num);
		}
		nodes_num++;
		head = head->next;
	}
	freetracker(thead);
	return (nodes_num);
}
