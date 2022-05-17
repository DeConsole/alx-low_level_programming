#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between the strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list thelist;
	unsigned int d;
	char *str;

	va_start(thelist, n);

	for (d = 0; d < n; d++)
{
	str = va_arg(thelist, char *);

	if (str)
	printf("%s", str);

	else
	printf("(nil)");

	if (d < n - 1)
	if (separator)
	printf("%s", separator);
}
	printf("\n");
	va_end(thelist);
}
