#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string that store the length
 * Return: void returns nothing
 */
void puts_half(char *str)
{
	int length, d, i;

	for (length = 0; str[length] != '\0'; length++)
{
}
	d = (length - 1) / 2;

	for (i = d + 1; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}

	_putchar('\n');

}
