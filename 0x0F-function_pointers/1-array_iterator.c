#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - main function that takes several variables
 * @array: array to iterate
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (!array || !action)
	return;

	for (d = 0; d < size; d++)
	action(array[d]);
}
