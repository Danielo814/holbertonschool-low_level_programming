#include <stdio.h>
#include <math.h>
/**
 * main - gets biggest prime factor
 *
 * Description: gets largest prime factor by looping
 * through to the square root and using modulous operator
 * Return: 0
 */
int main(void)
{
	long biggest_num;
	long i;
	long num = 612852475143;

	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			biggest_num = i;
			num = num / i;
		}
	}
	biggest_num = num;
	printf("%ld\n", biggest_num);
	return (0);
}
