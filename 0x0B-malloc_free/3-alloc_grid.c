#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - is a function to allocate a 2D array
 *	of numbers dynamically using malloc
 * @width: is the width of the array
 * @height: is the height of the array
 * Return: is to return NULL when faliure, or
 *	a pointer to the 2D array when seccuss.
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);

}
