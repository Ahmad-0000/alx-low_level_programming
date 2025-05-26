#include <stdio.h>
#include "search_algos.h"

int b_search(int *array, size_t l, size_t h, int value);

int exponential_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL || size == 0)
        return -1;
    i = 0;
    if (array[i] == value)
        return i;
    i = 1;
    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i < size ? i : size - 1);
    return b_search(array, i / 2, i < size ? i : size - 1, value);
}

int b_search(int *array, size_t l, size_t h, int value)
{
    size_t m;
    size_t i;

    if (array == NULL)
        return -1;
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
