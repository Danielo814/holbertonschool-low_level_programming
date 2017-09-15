#include <stdio.h>
/**
 * main - prints single digit numbers of base 10
 *
 * Description: uses ascii values to make putchar compliant
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
