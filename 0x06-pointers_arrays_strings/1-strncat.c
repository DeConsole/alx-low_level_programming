#include "main.h"
/**
 * _strncat - concatinate two strings
 * @dest: first string pointer
 * @src: second string pointer
 * @n: the number of bytes to use from src string
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i] != '\0')
	i++;

	while (src[d] != '\0' && n > d)
{
	dest[i] = src[d];
	d++;
	i++;
}

	if (n > 0)
{
	dest[i] = '\0';
}

	return (dest);
}
