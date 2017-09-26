#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Description: gets string and then starts from end and decrements
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i])
		i++;
	j = i - 1;
	while (s[j] != 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
