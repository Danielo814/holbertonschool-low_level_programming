#include <stdio.h>
/**
 * main - prints all possible combinations of two
 * single digit numbers
 * Description: This program is using putchar which means
 * we had to use division and modulo operator to print
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 100)
	{
		b = a / 10;
		c = a % 10;
		putchar(b + '0');
		putchar(c + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
