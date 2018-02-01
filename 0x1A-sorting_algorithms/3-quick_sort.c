#include "sort.h"
/**
 * partition - partition
 * @array: array
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: low
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j;
	int pivot;
	int bottom;

	pivot = array[high];
	bottom = low;
	i = low;
	while (i <= high - 1)
	{
		if (array[i] <= pivot)
		{
			if (array[i] != array[bottom])
			{
				j = array[i];
				array[i] = array[bottom];
				array[bottom] = j;
				print_array(array, size);
			}
			bottom++;
		}
		i++;
	}
	if (array[bottom] != array[high])
	{
		j = array[bottom];
		array[bottom] = array[high];
		array[high] = j;
		print_array(array, size);
	}
	return (bottom);
}

/**
 * quick - recursive quick sort
 * @array: array
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: void
 */
void quick(int *array, int low, int high, size_t size)
{
	int var;

	if (low < high)
	{
		var = partition(array, low, high, size);
		quick(array, low, var - 1, size);
		quick(array, var + 1, high, size);
	}
}

/**
 * quick_sort - quick sort sorting algorithm
 * @array: array to quick sort
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	low = 0;
	high = size - 1;
	quick(array, low, high, size);
}
