#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 *
 * Description: 3 while loops to get 3 numbers with putchar
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = 48;
			b++;
		}
		b = 48;
		a++;
	}
	putchar('\n');
	return (0);
}
