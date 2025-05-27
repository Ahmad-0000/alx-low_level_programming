#include <stdio.h>
#include "search_algos.h"

int binary_search_recursion(int *array, size_t l, size_t h, int value);

int advanced_binary(int *array, size_t size, int value)
{
    size_t rank;

    if (array == NULL || size == 0)
        return -1;
    rank = binary_search_recursion(array, 0, size, value);
    if (array[rank] == value)
        return rank;
    return -1;
}

int binary_search_recursion(int *array, size_t l, size_t h, int value)
{
    size_t m, i;


    if (array == NULL)
        return -1;
    if (l >= h)
        return l;
    m = l + ((h - l) / 2);
    printf("Searching in array: ");
    for (i = l; i < h; i++)
    {
        if (i == h - 1)
            printf(" %d\n", array[i]);
        else
            printf(" %d,", array[i]);
    }
    if (array[m] < value)
        l = m + 1;
    else
        h = m;
    return binary_search_recursion(array, l, h, value);
}
