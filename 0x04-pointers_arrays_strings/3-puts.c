#include "holberton.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: loops characters and prints result
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	if (!str[i])
		_putchar(10);
}
