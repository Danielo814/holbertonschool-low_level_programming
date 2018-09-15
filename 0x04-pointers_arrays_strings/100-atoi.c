
#include "holberton.h"
/**
 *
 *
 *
 *
 */
int _atoi(char *s)
{
	int d, result, help, i, j;

	result = 0;
	d = 1;
	i = 0;
	while (s[i])
		i++;
	j = i - 1;
	while (s[j] >= 1)
	{
		help = s[j] - '0';
		help *= d;
		result += help;
		j--;
		d = d * 10;
	}
	return (result);
}
