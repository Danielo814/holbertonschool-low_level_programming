#include "holberton.h"
/**
 * _strpbrk - searches a string for any bytes
 * @s: string to search
 * @accept: array of bytes to search
 *
 * Return: pointer to byte in s, null if no bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;

	while (*s)
	{
		a = 0;
		while (accept[a])
		{
			if (*s == accept[a])
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
