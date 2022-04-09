#include <stdio.h>
/**
 * main - main function where complier starts
 *
 * Return: 0 terminates when successful
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
	putchar(alphabet);
}

	putchar('\n');

	return(0);

}
