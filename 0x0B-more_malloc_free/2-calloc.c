#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of bytes
 * @size: number of bits
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		a[i] = 0;
	return (a);
}
