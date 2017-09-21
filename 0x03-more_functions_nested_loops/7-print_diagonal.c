#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of lines to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row;
	int space;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (row = 0; row < n; row++)
	{
		space = row - 1;
		for (j = 0; j <= space; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
