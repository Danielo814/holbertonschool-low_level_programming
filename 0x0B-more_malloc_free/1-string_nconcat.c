#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string to add to s1
 * @n: number of bytes
 *
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, size, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	size = i + n + 1;
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size - 1 ; b++)
	{
		if (b < i)
			a[b] = s1[b];
		else
			a[b] = s2[b - i];
	}
	a[b] = '\0';
	return (a);
}
