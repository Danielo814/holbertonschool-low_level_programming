#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index where value is located, or -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int retval;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		retval = array[i];
		printf("Value checked array[%lu] = [%d]", i, retval);
		putchar(10);
		if (retval == value)
			return (i);
	}
	return (-1);
}
