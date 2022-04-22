#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: void returns nothing
 */
void rev_string(char *s)
{
	int length, j, i;
	char d1, d2;

	length = 0;
	while (s[length] != '\0')
{
	length++;
}
	j = length - 1;
	i = 0;

	while (j > i)
{
	d1 = s[i];
	d2 = s[j];
	s[i] = d2;
	s[j] = d1;
	j--;
	i++;
}
}
