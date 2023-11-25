#ifndef SINGLYLISTS
#define SINGLYLISTS 1
#include <stddef.h>
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
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **h, const int n);
void free_listint(listint_t *h);
void free_listint2(listint_t **h);
int pop_listint(listint_t **h);
listint_t *get_nodeint_at_index(listint_t *h, unsigned int i);
int sum_listint(listint_t *h);
#endif
