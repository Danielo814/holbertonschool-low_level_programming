#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a grid with two dimensionsional array
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array of ints
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int a, b;

	if (height < 1)
		return (NULL);
	ar = malloc(height * sizeof(*ar));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(width * sizeof(int));
		if (ar[a] == NULL)
		{
			while (a >= 0)
			{
				free(ar[a]);
				a--;
			}
		}
		free(ar);
		return (NULL);
		for (b = 0; b < width; b++)
		{
			ar[a][b] = 0;
		}
	}
	return (ar);
}
