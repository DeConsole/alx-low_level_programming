#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: the string to print in reverse
 * Return: void returns null value
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (s[length] != '\0')
{
	length++;
}

	for (i = length - 1; i >= 0; i--)
{
	_putchar (s[i]);
}

	_putchar ('\n');
}
