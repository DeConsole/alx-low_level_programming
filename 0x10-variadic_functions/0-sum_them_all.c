#include "variadic_functions.h"
/**
 * sum_them_all - returns sum
 * @n: amount of the arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list thelist;
	unsigned int d;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(thelist, n);

	for (d = 0; d < n; d++)
	sum += va_arg(thelist, int);
	va_end(thelist);

	return (sum);
}
