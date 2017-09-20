#include "holberton.h"
/**
 * print_times_table - prints times table the size of value n
 * @n: number passed in from main
 *
 * Description: This function can make a times table with any number
 * between 0 and 15. Since I am using putchar to print and not printf
 * I had to extract each number using arithmetic operatorsl
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, column;
	int first, second, third;
	int multiple;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiple = row * column;
				first = multiple % 10;
				second = multiple / 10 % 10;
				third = multiple / 100;
				if (third == 0 && column != 0)
				{
					_putchar(' ');
					if (second == 0)
						_putchar(' ');
					else
						_putchar(second + '0');
					_putchar(first + '0');
				}
				else if (third != 0)
				{
					_putchar(third + '0');
					_putchar(second + '0');
					_putchar(first + '0');
				}
				if (column == 0)
					_putchar('0');
				if (column != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
