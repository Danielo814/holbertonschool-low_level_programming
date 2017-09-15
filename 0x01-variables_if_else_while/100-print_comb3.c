#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Description: prints smallest possible combinations of two
 * digits in ascending order
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 100)
	{
		b = a / 10;
		c = a % 10;
		if (b != c && b < c)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
