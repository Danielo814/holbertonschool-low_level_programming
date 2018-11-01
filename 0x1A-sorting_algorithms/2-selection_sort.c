#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 *
 * @array: pointer to array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int minim, i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		minim = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minim])
				minim = j;
		}
		if (minim != i)
		{
			temp = array[minim];
			array[minim] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
