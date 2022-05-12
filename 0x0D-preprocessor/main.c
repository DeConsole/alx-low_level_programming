#include <stdio.h>
/**
 * main - Print the the name of the file it was compiled from
 * Return: 0 success
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
