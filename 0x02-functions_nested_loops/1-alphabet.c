#include "holberton.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: print alphabet using prototype _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
