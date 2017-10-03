#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @a: value
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 8)
				_putchar(10);
			j++;
		}
		i++;
	}
}
