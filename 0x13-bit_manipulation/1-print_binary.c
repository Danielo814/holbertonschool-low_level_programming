#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints binary
 *
 * @n: decimal number to to convert
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = n;
	a = 0;
	while ((temp >>= 1) > 0)
		a++;
	while (a >= 0)
	{
		if ((n >> a) & 1)
			_putchar('1');
		else
			_putchar('0');
		a--;
	}
}
