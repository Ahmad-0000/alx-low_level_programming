#include <stdio.h>
#include <math.h>
#include "search_algos.h"

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t sqr;
    listint_t *ptr1;
    listint_t *ptr2;
    size_t tmp;

    if (list == NULL || size == 0)
      return NULL;
    ptr1 = ptr2 = list;
    sqr = sqrt(size);
    while (1)
    {
        tmp = sqr;
        while (tmp && ptr2->next)
        {
            ptr2 = ptr2->next;
            tmp--;
        }
        if (ptr2->next == NULL)
        {
            printf("Value checked at index [%lu] = [%d]\n", ptr2->index, ptr2->n);
            break;
        }
        printf("Value checked at index [%lu] = [%d]\n", ptr2->index, ptr2->n);
        if (ptr2->n > value)
        {
          break;
        }
        else if (ptr2->n == value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", ptr1->index, ptr2->index);
            break;
        }
        ptr1 = ptr2;
    }
    list = ptr1;
    printf("Value found between indexes [%lu] and [%lu]\n", list->index, ptr2->index);
    while (list)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return list;
        list = list->next;
    }
    return NULL;
}
