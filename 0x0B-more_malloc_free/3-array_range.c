#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array
 *
 * @min: min in array
 * @max: max in array
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int j;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (min <= max)
		p[j++] = min++;
	return (p);
}
