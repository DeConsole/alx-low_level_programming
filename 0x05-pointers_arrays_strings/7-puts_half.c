#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string that store the length
 * Return: void returns nothing
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
{
	i++;
}
	last = (i - 1) / 2;

	for (i = last + 1; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}

	_putchar('\n');
}
