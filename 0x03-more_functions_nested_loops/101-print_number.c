#include "holberton.h"
/**
 * print_number - prints an integer
 *
 * @n: number to print
 * Description: uses recursion to print an integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + 48);
}
