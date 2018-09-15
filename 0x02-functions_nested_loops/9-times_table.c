#include "holberton.h"
/**
 * times_table - prints 9 times table, starting with 0
 *
 * Description: Two loops are set to represent the rows and
 * columns. there are 9 columns and 9 rows, counting from 0-9
 * in each and in order to make the times table we multiplied
 * the row number by the column number in each cell
 * Return: void
 */
void times_table(void)
{
	int row, column;
	int mult;
	int first, second;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = row * column;
			if (mult >= 10)
			{
				first = mult / 10;
				second = mult % 10;
				_putchar(' ');
				_putchar(first + '0');
				_putchar(second + '0');
			}
			else
			{
				if (column != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
		        if (column != 9)
			{
				_putchar(',');
			}
			if (column == 9)
			{
				_putchar('\n');
			}
		}
	}
}
