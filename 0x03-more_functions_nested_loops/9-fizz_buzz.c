#include <stdio.h>
/**
 * main - Fizz Buzz program
 * Description: prints numbers 1 - 100 but if number is
 * divisible by 3 and 5 it prints Fizzbuzz in the numbers place
 * if divisible by 3 prints Fizz, if divisible by 5 prints Buzz.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
