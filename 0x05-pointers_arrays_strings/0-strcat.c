#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: copies to dest string
 * @src: string to copy from
 * Description: uses index to access array
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	b = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[b])
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}
