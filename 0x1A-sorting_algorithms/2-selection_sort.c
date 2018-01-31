#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t low;
	int temp;

	if (size == 0)
		return;
	if (array == NULL)
		return;

	i = 0;
	while (i < size - 1)
	{
		low = i;
		j = i;
		while (j < size)
		{
			if (array[j] < array[low])
				low = j;
			j++;
		}
		if (i != low)
		{
			temp = array[i];
			array[i] = array[low];
			array[low] = temp;
			print_array(array, size);
		}
		i++;
	}
}
