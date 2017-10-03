#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square matrix
 * @a: pointer to array
 * @size: diagonal to add
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	j = 0;
	sum = 0;
	for (i = 0; i < (size * size); i += size + 1)
		j = j + a[i];
	for (i = suze - 1; i < (size * size - 1); i += size - 1)
		sum = sum + a[i];
	printf("%d, %d\n", j, sum);
}
