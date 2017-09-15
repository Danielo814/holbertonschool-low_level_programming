#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Description: decrementation used to go from z to a
 * Return: 0
 */
int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
