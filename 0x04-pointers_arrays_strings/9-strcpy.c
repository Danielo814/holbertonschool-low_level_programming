#include "holberton.h"
/**
 * _strcpy - copies a string to dest
 * @dest: variable to copy to
 * @src: string to copy from
 * Description: sets dest equal to src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
