#include "holberton.h"
/**
 * _memset - sets first n bytes of memory
 * @s: array passed in
 * @b: what to set
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
