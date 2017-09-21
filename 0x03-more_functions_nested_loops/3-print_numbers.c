#include "holberton.h"
/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Description: loops through numbers and prints
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
