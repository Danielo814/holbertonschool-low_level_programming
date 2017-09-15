#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - tells if last digit of number is 0
 * greater than 5 or less than 6
 *
 * Return: 0
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n;
	n = n % 10;
	printf("Last digit of %d is %d ", a, n);
	if (n > 5)
		printf("and is greater than 5\n");
	if (n == 0)
		printf("and is 0\n");
	if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
