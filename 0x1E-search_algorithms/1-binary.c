#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t l, m, h; /* lower, middle and higher positions */
    size_t i;

    if (array == NULL || size == 0)
        return -1;
    l = 0;
    h = size - 1;
    while (l <= h)
    {
        printf("Searching in array: ");
        for (i = l; i <= h; i++)
        {
            if (i == h)
              printf("%d\n", array[i]);
            else
              printf("%d, ", array[i]);
        }
        m = l + (h - l) / 2;
        if (array[m] < value)
          l = m + 1;
        else if (array[m] > value)
          h = m - 1;
        else
          return m;
    }
    return -1;
}
