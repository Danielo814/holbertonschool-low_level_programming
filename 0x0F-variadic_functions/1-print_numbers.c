#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: string printed between numbers
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i;
	unsigned int result;

	for (i = 0; i < n; i++)
	{
		result = va_arg(ap, unsigned int);
		printf("%d", result);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
