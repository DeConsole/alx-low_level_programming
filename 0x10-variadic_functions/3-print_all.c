#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list thelist;
	unsigned int d = 0, e, f = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(thelist, format);
	while (format && format[i])
{
	e = 0;
	while (t_arg[e])
{
	if (format[d] == t_arg[e] && f)
{
	printf(", ");
	break;
}e++;
}
	switch (format[d])
{
	case 'f':
	printf("%f", va_arg(thelist, int)), f = 1;
	break;

	case 'i':
	printf("%d", va_arg(thelist, int)), f = 1;
	break;

	case 'p':
	printf("%p", va_arg(thelist, double)), f = 1;
	break;

	case 's':
	str = va_arg(thelist, char *), f = 1;

	if (!str)
{
	printf("(null)");
	break;
}
	printf("%s", str);
	break;
}d++;
}
	printf("\n"), va_end(thelist);
}
