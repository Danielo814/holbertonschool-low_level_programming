#include "holberton.h"
/**
 * _strlen_recursion - getting string length using recursion
 *
 * @s: string to get length of
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
