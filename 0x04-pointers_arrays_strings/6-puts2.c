#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: string to print from
 * Description: increments by two to get every other character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
