#include "holberton.h"
/**
 * print_line - prints lines
 * @n: number passed from main
 * Description: uses loop to print line
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
