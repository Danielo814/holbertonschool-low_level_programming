#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabet
 *
 * Description: uses two while loops to print uppercase and lower
 * Return: 0
 */
int main(void)
{
	int a;

	a = 'a';
	while (a < 'z')
	{
		putchar(a);
		a = a + 1;
	}
	a = 'A';
	while (a < 'Z')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
