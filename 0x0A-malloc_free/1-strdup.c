#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated string
 *
 * @str: string to allocate
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	len = len + 1;
	if (len == 0)
		return (NULL);
	a = malloc(len * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
