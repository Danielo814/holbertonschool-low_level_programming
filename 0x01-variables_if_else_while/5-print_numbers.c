#include <stdio.h>
/**
 * main - prints single digit numbers of base 10
 *
 * Description: uses while loop to output numbers
 * Return: 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a++);
	}
	printf("\n");
	return (0);
}
