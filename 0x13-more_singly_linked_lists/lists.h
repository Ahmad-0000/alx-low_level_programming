#ifndef SINGLY_LISTS_H
#define SINGLY_LISTS_H
#include <stdlib.h>

/**
 * struct listint_s - is a node for a singly linked list
 * @n: is an integer
 * @next: is a pointer to the next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct tracker - a singly linked list to track addresses of nodes in
 * a listint_t list
 * @ptr: a node in listint_t list address
 * @next: to point to the next node in tracklist_t
 */

typedef struct tracker
{
	const listint_t *ptr;
	struct tracker *next;
} tracklist_t;

size_t print_listint(const listint_t *head);
size_t listint_len(const listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
#endif
