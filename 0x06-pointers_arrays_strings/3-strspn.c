#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - returns number of bytes
 * @s: string to count
 * @accept: characters to accept
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int digit;
	int a;
	int b;
	int c;

	a = 0;
	while (s[a])
	{
		b = 0;
		c = 0;
		while (accept[c])
		{
			if (s[a] == accept[c])
				b = 1;
			c++;
		}
		c = 0;
		if (b == 0)
			break;
		digit++;
		a++;
	}
	return (a);
}
