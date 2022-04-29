#include "main.h"
/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: 0 On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
{
	return (1 + _strlen_recursion(s + 1));
}
	return (0);
}
