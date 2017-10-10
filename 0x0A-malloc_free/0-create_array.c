#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with char
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc((size + 1) * sizeof(char));
	if (size == 0 || n == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		n[i] = c;
		i++;
	}
	n[i] = '\0';
	return (n);
}
