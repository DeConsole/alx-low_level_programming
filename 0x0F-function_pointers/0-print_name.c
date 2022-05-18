#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints out a name
 * @name: name that will be printed out
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	char *name;

	if (!name || !f)
	return;

	f(name);
}
