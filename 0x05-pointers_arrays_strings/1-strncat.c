#include "holberton.h"
/**
 * _strncat - concatenates strings with number of characters to combine
 * @n: number of characters
 * @dest: destination
 * @src: source
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && b != n)
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}
