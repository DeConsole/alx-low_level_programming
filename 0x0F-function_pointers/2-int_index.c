#include "function_pointers.h"
/**
 * int_index - looks for the integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to the comparing function
 * Return: first element index of cmp either 0 r -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array && cmp)
{
	for (d = 0; d < size; d++)
{
	if (cmp(array[d]) != 0)
	return (d);
}
}
	return (-1);
}
