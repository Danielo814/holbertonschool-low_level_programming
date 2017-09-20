#include <stdio.h>
/**
 * main - prints sum of all natural numbers from 0 - 1024
 *
 * Description: uses for loop to pass through all characters
 * and find which ones are divisible by 3 and 5
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int sum;

	for (a = 0; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 || c == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
