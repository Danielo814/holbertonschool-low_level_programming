#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: uses two loops to print numbers and letters
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
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
