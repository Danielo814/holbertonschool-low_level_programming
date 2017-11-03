#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - sets value to 1 at index
 *
 * @n: value passed in
 * @index: index to set
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
		return (-1);
	a = 1;
	while (index > 0)
	{
		index -= 1;
		a *= 2;
	}
	*n = *n + a;
	return (1);
}
