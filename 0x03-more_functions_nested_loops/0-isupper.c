#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Description: will check if number is less than Z or
 * greater than A
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
