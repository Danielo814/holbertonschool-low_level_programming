#include "holberton.h"
/**
 * _memcpy - copies n bytes of memory
 * @dest: destination to copy to
 * @src: code to copy
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
