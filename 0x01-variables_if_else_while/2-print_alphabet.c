#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
