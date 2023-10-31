#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 * previously created by the alloc_grid function. It iteratively frees
 * the memory for each row and then frees the array of row pointers.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

