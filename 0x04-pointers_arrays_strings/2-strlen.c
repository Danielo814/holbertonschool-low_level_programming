#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Description: uses loop to cycle through string length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
