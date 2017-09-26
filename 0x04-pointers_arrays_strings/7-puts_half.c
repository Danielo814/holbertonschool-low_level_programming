#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: string to print second half of
 * Description: divides length of string by two to start index
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
		i++;
	j = i / 2;
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);
}
