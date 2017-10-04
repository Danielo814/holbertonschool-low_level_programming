#include "holberton.h"
/**
 * helper - checks to see if n is square root of i
 *
 * @n: number to check if equal to n when multiplied
 * by itself
 * @i: number passed in
 * Return: square root
 */
int helper(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	else
		return (helper(n + 1, i));
}
/**
 * _sqrt_recursion - calls helper to function to see if
 * number given to it has a natural square root
 * @n: number passed in
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
