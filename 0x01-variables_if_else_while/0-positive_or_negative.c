#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Program to tell if a number is positive,
 * negative or zero.
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
