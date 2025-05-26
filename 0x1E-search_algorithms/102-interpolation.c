#include <stdio.h>
#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
    size_t l, h, pos; /* low, high and current position indices */

    if (array == NULL || size == 0)
        return -1;
    l = 0;
    h = size - 1;
    while (l < h && l < size)
    {
        pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
        if (pos >= size)
        {
          printf("Value checked array[%lu] is out of range\n", pos);
          return -1;
        }
        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
        if (array[pos] == value)
            return value;
        else if (array[pos] > value)
          h = pos - 1;
        else
          l = pos + 1;
    }
    return -1;
}
