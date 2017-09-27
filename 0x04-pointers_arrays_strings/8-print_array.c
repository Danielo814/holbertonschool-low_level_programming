#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array
 * @a: pointer to array
 * @n: number of elements to print
 * Description: goes through array and prints what counter is at
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int j;

	j = n;
	i = 0;
	while (a[i] != a[j])
	{
		if (a[i] != a[j - 1])
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
