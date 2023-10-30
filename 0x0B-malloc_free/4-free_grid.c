#include <stdlib.h>
#include "main.h"

/**
 * free_grid - is a function to free my
 *	a space that is associated with
 *	my previous function
 * @g: is a pointer to the 2D grid
 * @h: is the height of the grid
 */
void free_grid(int **g, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(g[i]);
}
