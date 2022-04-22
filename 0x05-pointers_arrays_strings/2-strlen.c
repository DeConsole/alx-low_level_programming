#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: char that stores length
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
{
	length++;
}
	return (length);

}
