#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a funciton on each element
 * @array: input
 * @size: size
 * @action: pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j = -1;

	if (array && action)
	{
		while (++j < size)
		{
			action(array[j]);
		}
	}
}
