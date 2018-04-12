#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, beg, mid, end;

	if (!array)
		return (-1);
	if (size == 0)
		return (-1);
	beg = 0;
	end = size - 1;
	while (beg <= end)
	{
		printf("Searching in array:");
		i = beg;
		while (i < end)
		{
			printf(" %d,", array[i]);
			i++;
		}
		printf(" %d\n", array[i]);
		mid = (beg + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			beg = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
