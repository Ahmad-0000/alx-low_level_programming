#include <stdio.h>
#include <math.h>
#include "search_algos.h"


int jump_search(int *array, size_t size, int value)
{
    size_t sqr;
    size_t l, h; /* low and high boundaries of blocks */

    if (array == NULL || size == 0)
        return -1;
    sqr = (size_t)sqrt(size);
    l = h = 0;
    while (h < size && array[h] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", h, array[h]);
        l = h;
        h += sqr;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", l, h);
    while (l < size)
    {
        printf("Value checked array[%lu] = [%d]\n", l, array[l]);
        if (array[l] == value)
            return l;
        l++;
    }
    return -1;
}
