#include "holberton.h"
/**
 * helper - goes through numbers to check for numbers
 * divisible by i
 * @n: number to check if goes into i
 * @i: number passed in
 * Return: 0 if not prime 1 if prime
 */
int helper(int n, int i)
{
	if ((i % n == 0 || i < 2) && i != n)
		return (0);
	else if (i == n)
		return (1);
	else
		return (helper(n + 1, i));
}
/**
 * is_prime_number - checks for prime number
 *
 * @n: number passed in
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (helper(2, n));
}
