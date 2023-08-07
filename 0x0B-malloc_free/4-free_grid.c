#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - frees memory allocated  by alloc_grid
 * @grid: the actual grid
 * @height: height of the grid
 *
 * Return: nohing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
grid[i] = NULL;
}
free(grid);
}
