#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: number given as input
 * Description: uses conditional to check if number is negative
 * and if it is, the number will be multiplied by -1 in order to
 * make it a positive number before printing
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
