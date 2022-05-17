#include "variadic_functions.h"
/**
 * print_numbers - prints a list of numbers
 * @separator: string to be printed between numbers
 * @n: integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list thelist;
	unsigned int d;

	va_start(thelist, n);

	for (d = 0; d < n; d++)
{
	printf("%d", va_arg(thelist, int));

	if (separator && d < n - 1)
	printf("%s", separator);
}
	printf("\n");
	va_end(thelist);
}
