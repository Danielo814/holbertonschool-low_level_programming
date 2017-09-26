#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Description: swaps first and last values throughout array
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, n;
	int j, tmp;

	i = 0;
	while (s[i])
		i++;
	n = 0;
	j = i - 1;
	while (n < j)
	{
		tmp = s[n];
		s[n] = s[j];
		s[j] = tmp;
		n++;
		j--;
	}
}
