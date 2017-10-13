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
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
