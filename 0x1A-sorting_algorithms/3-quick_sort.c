#include "sort.h"
/**
 * quick_sort - quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;
	quick(array, 0, size - 1, size);
}

/**
 * quick - sorts using positions
 * @ar: array to sort
 * @low: low index
 * @high: high index
 * @size: size of array
 */
void quick(int *ar, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(ar, low, high, size);
		quick(ar, low, i - 1, size);
		quick(ar, i + 1, high, size);
	}
}

/**
 * partition - lomuto quick_sort algorithm
 * @ar: array to sort
 * @low: first index
 * @high: high index
 * @size: size of the array
 * Return: position of pivot
 */
int partition(int *ar, int low, int high, size_t size)
{
	int piv, i, j, temp;

	piv = ar[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (ar[j] <= piv)
		{
			i++;
			if (i != j)
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
				print_array(ar, size);
			}
		}
	}
	if (ar[high] < ar[i + 1])
	{
		temp = ar[i + 1];
		ar[i + 1] = ar[high];
		ar[high] = temp;
		print_array(ar, size);
	}
	return (i + 1);
}
