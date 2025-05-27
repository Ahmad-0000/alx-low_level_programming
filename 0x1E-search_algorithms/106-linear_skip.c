#include <stdio.h>
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *ptr1, *ptr2;
    size_t size;

    if (list == NULL)
        return NULL;
    size = 0;
    ptr1 = list;
    while (ptr1)
    {
        ptr1 = ptr1->next;
        size++;
    }
    ptr1 = list;
    ptr2 = list->express;
    while (ptr2)
    {
        printf("Value checked at index [%lu] = [%d]\n", ptr2->index, ptr2->n);
        if (ptr2->n < value)
        {
          ptr1 = ptr2;
          ptr2 = ptr2->express;
        }
        else if (ptr2->n >= value)
        {
          break;
        }
    }
    printf("Value found between indexes [%lu] and [%lu]\n", ptr1->index, ptr2 ? ptr2->index : size - 1);
    while (ptr1)
    {
        printf("Value checked at index [%lu] = [%d]\n", ptr1->index, ptr1->n);
        if (ptr1->n == value)
            return ptr1;
        ptr1 = ptr1->next;
    }
    return NULL;
}
