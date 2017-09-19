#include "holberton.h"
/**
 * _islower - checks if letter is lowercase
 *
 * @c: letter to check case check
 *
 * Description: this program will tell us if number
 * is upper or lower, returns 1 for lower, 0 for upper
 * Return: 1 for lowercase 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
