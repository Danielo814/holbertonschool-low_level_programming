#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: Size of array
 * @cmp: pointer fo function
 * Return:  index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = -1;

	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	while (++j < size)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
