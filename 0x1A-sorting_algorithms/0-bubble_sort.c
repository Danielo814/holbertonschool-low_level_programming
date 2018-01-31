#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm
 *
 * @array: array to sort
 * @size: size of array to sort
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t n = size;
	size_t i;

	if (array == NULL || size < 1)
		return;
	for (; n > 0; n--)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		;
	}
}
