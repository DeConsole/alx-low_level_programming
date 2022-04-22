#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array
 * @a: the pointer to the interger that will be changed
 * @n: array's length
 * Return: void return nothing
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

	if (i < n - 1)
{
	printf(", ");
}
}
	printf("\n");

}
