#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between strings
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *result;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(ap, char *);
		if (result == NULL)
			printf("(nil)");
		else
			printf("%s", result);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
