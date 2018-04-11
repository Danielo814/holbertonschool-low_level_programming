#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	if (size == 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
