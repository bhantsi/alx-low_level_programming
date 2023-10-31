#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of integers.
 * @grid: The address of the two-dimensional grid.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Description: This function prints a 2D grid of integers. It iterates
 * through the grid and prints each element, followed by a space. After
 * each row, it inserts a newline character to separate rows.
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height);

/**
 * main - Entry point to test the alloc_grid function.
 *
 * Description: This program tests the alloc_grid function by allocating
 * a 2D grid of integers with dimensions 6x4 and initializing it with zeros.
 * It also checks for memory allocation errors and prints the grid before and
 * after modifying specific elements.
 *
 * Return: 0 if successful, 1 if memory allocation fails.
 */
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
return (0);
}

void print_grid(int **grid, int width, int height)
{
int w;
int h;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
printf("%d ", grid[h][w]);
w++;
}
printf("\n");
h++;
}
}
