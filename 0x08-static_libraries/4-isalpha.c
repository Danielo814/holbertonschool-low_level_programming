#include "holberton.h"
/**
 * _isalpha - checks for any alphabetic character
 * @c: number to check against program
 * Description: uses logical operators to check characters
 * Return: 1 for letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
