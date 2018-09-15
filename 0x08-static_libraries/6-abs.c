
#include "holberton.h"
/**
 * _abs - computers the absolute value of an integer
 * @a: number to check
 * Description: gives absolute value of any number
 * Return: absolute value of number
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
