#include "holberton.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: print alphabet using prototype _putchar
 * Return: void
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
