#include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: value of a
 * @b: value of b
 * Description: swaps values by obtaining addresses of each other
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
