#ifndef THIS_FILE
#define THIS_FILE
#include <stddef.h>

/**
 * struct list_s - is a singly linked list
 * @str: is a string string - (a malloc'ed string)
 * @len: is the length of the @str
 * @next: is a pointer to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *head);
size_t list_len(const list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
