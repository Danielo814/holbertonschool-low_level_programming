#include "holberton.h"
/**
 * _isdigit - checks for digit from 0 - 9
 * @c: number to check
 * Description: if statement checks if number is between 0 and 9
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
