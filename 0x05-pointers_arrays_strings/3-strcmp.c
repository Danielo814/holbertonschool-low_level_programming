#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first to compare
 * @s2: second to compare
 * Return: difference between two
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] && s2[a])
	{
		if (s1[a] != s2[a])
			return ((s1[a] - '0') - (s2[a] - '0'));
		a++;
	}
	return (0);
}
