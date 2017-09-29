#include "holberton.h"
/**
 * _strncpy - copies a string using n
 * @dest: destination from source
 * @src: source
 * @n: number to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
