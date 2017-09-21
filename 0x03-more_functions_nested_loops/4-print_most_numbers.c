#include "holberton.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Description: if statement to check if numbers are not 2
 * or 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
