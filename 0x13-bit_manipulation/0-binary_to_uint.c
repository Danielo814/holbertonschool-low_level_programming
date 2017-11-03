#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	unsigned int d;
	int c;

	if (b == NULL)
		return (0);

	c = 0;
	while (b[c])
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		c++;
	}
	a = 0;
	d = 1;
	c--;
	while (c >= 0)
	{
		if (b[c] == '1')
			a = a + d;
		c--;
		d = d * 2;
	}
	return (a);
}
