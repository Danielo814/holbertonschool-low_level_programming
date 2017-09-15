#include <stdio.h>
/**
 * main - single digit numbers separated by comma and space
 *
 * Description: if condition to add comma and space
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		if (a > 48 && a <= 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
