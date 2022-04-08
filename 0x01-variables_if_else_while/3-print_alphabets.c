#include <stdio.h>
/**
 * main - main function where compiler starts
 *
 * Return: 0 End of program
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
{
	putchar(lower);
}

	for (upper = 'A'; upper <= 'Z'; upper++)
{
	putchar(upper);
}

	putchar('\n');

	return (0);
}
