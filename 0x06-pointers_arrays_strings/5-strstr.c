#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - find first occurance of needle in haystack
 * @haystack: string to search
 * @needle: string to find
 *
 * Return: pointer to beginning of fstring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *b = needle;

		while (*b == *haystack && *haystack != '\0' && *b != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
