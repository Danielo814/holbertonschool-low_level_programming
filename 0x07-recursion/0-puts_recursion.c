#include "holberton.h"
/**
 * _puts_recursion - uses recursion to print string
 * @s: string passed in
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);
}
