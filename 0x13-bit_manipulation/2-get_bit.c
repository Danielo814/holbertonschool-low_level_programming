#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - gets value at index
 * @n: number to check
 * @index: index to fetch bit
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
