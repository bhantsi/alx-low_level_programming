#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of integers.
 * @grid: The address of the two-dimensional grid.
 * @width: Width of the grid.
 * @height: Height of the grid.
 * main - check the code
 *
 * Description: This function prints a 2D grid of integers. It iterates
 * through the grid and prints each element, followed by a space. After
 * each row, it inserts a newline character to separate rows.
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height);
void print_grid(int **grid, int width, int height);
int main(void)
{
int **grid;

grid = alloc_grid(6, 4);
if (grid == NULL)
{
return (1);
}
print_grid(grid, 6, 4);
printf("\n");
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
free_grid(grid, 4);
return (0);
}

