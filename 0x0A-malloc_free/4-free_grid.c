#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{

	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
