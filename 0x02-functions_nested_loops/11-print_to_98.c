#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number passed in from main
 * Description: uses loops to check if n is less than,
 * greater than, or equal to 98. The numbers will then either
 * increment or decrement based their relative position to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (i < 98)
	{
		for(; i < 98; i++)
		{
			printf("%d", i);
		}
	}
	if (i > 98)
	{
		for (; i > 98; i++)
		{
			printf("%d", i);
		}
	}
	if (i == 98)
		printf("%d", i);
	printf("\n");
			
}






