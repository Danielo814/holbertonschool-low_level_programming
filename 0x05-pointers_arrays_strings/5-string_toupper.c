#include "holberton.h"
/**
 * string_toupper - converts lowercase to uppercase
 *
 * @c: pointer to string
 *
 * Return: string
 */
char *string_toupper(char *c)
{
	int a;

	a = 0;
	while (c[a])
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] = c[a] - ('a' - 'A');
		a++;
	}
	return (c);
}
