#ifndef THIS_FILE
#define THIS_FILE
#include <stddef.h>
/**
 * struct list_s - is a singly linked list
 * @str: is a string string - (a malloc'ed string)
 * @len: is the length of the string
 * @next: is to point to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **h, const char *str);
#endif
