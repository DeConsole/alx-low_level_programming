#include "main.h"
/**
 *
 * _isalpha - Return 1 if C is a letter
 * @c: the int to print
 *
 * Return: 0 - success
 */
int _isalpha(int c)
{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
	return (1);
}

	else
{
	return (0);
}

}
