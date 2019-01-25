#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located, or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		i = low;
		while (i <= high)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
